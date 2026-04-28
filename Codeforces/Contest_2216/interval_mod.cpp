
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {

    int t;

    cin >> t;

    for(int i = 0; i<t; i++){
        
        int n, k;
        ll p, q;
        
        cin >> n >> k >> p >> q;

        vector<ll> a(n);

        for (int j = 0; j < n; j++) {

             cin >> a[j];
            
        }

        vector<ll> vp(n);
        vector<ll> vqp(n);
        vector<ll> m(n);

        for (int j = 0; j < n; j++) {
            vp[j] = a[j] % p;
            vqp[j] = (a[j] % q) % p;
            m[j] = min(vp[j], vqp[j]);
        }

        vector<ll> vpp(n + 1, 0);
        vector<ll> vpqp(n + 1, 0);
        vector<ll> pm(n + 1, 0);

        for (int j = 0; j < n; j++) {
            vpp[j+1] = vpp[j] + vp[j];
            vpqp[j+1] = vpqp[j] + vqp[j];
            pm[j+1] = pm[j] + m[j];
        }

        ll somafinal = 0;
        for (int j = 0; j < n; j++) somafinal += a[j];

        for (int l = 0; l + k - 1 < n; l++) {
            int r = l + k - 1;
            ll outside = pm[n] - (pm[r+1] - pm[l]);
            ll somap = vpp[r+1] - vpp[l];
            ll somaqp = vpqp[r+1] - vpqp[l];
            ll intervalo = min(somap, somaqp);
            somafinal = min(somafinal, outside + intervalo);
        }

        cout << somafinal << endl;

    }

    return 0;
}