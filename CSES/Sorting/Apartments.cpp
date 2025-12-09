#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

// ll bb(vector<ll> v, ll high, ll low, ll alvo){
//     if(low>high){
//         return -1;
//     }

//     ll mid = low + (high-low)/2;

//     if(v[mid] == alvo){
//         return mid;
//     } else if (v[mid] < alvo){
//         return bb(v, mid+1, high, alvo);
//     } else {
//         return bb(v, low, mid-1, alvo);
//     }
// }

int main(){

    ll n, m, k;

    cin >> n >> m >> k;

    vector<ll> pessoas(n);
    vector<ll> apartamentos(m);

    for(ll i = 0; i<n; i++){
        ll aux;
        cin >> aux;
        pessoas[i] = aux;
    }

    sort(pessoas.begin(), pessoas.end());

    for(ll i = 0; i<m; i++){
        ll aux;
        cin >> aux;
        apartamentos[i] = aux;
    }

    sort(apartamentos.begin(), apartamentos.end());
}