#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        ll n, k, p, q;
        cin >> n >> k >> p >> q;

        vector<ll> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        // Se não cabe nenhum intervalo, resposta é a soma original
        if (n < k) {
            ll soma = 0;
            for (int i = 0; i < n; i++) soma += a[i];
            cout << soma << "\n";
            continue;
        }

        // qp[i] = (a[i]%q)%p  (mod-q depois mod-p)
        // pp[i] = a[i]%p       (só mod-p)
        vector<ll> qp(n), pp(n);
        for (int i = 0; i < n; i++) {
            qp[i] = (a[i] % q) % p;
            pp[i] = a[i] % p;
        }

        // prefix sums de qp
        vector<ll> prefix_qp(n + 1, 0);
        for (int i = 0; i < n; i++) prefix_qp[i + 1] = prefix_qp[i] + qp[i];

        // DP da direita pra esquerda
        // f[i] = menor soma para elementos [i, n-1]
        // g[j] = prefix_qp[j+1] + f[j+1]  (usado na transição do intervalo de mod-q)
        vector<ll> f(n + 1, 0);
        vector<ll> g(n, LLONG_MAX);

        // suffix_min_g[i] = min(g[j] para j >= i)
        vector<ll> suffix_min_g(n + 1, LLONG_MAX);

        for (int i = n - 1; i >= 0; i--) {
            // Opção 1: não aplica mod-q em i → elemento recebe pp[i]
            ll opt1 = pp[i] + f[i + 1];

            // Opção 2: inicia intervalo de mod-q em i, termina em algum j >= i+k-1
            // f[i] = -prefix_qp[i] + min_{j >= i+k-1}(g[j])
            ll opt2 = LLONG_MAX;
            int min_j = i + k - 1;
            if (min_j < n && suffix_min_g[min_j] != LLONG_MAX) {
                opt2 = -prefix_qp[i] + suffix_min_g[min_j];
            }

            f[i] = min(opt1, opt2);

            // Atualiza g[i] = prefix_qp[i+1] + f[i+1]
            g[i] = prefix_qp[i + 1] + f[i + 1];

            // Atualiza suffix_min_g
            suffix_min_g[i] = min(g[i], suffix_min_g[i + 1]);
        }

        cout << f[0] << "\n";
    }

    return 0;
}
