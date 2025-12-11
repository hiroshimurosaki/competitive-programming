#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;


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