#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
 
int main(){
 
    ll n;

    cin >> n;
    vector<ll> v(n);
    ll soma = 0;

    for(ll i=0; i<n; i++){
        ll aux;
        cin >> aux;
        v[i] = aux;
        if(i>=1){
            if(v[i-1] >= v[i]){
                ll t = (v[i-1] - v[i]); 
                v[i] += t;
                soma += t;
            }
        }
    }


    cout << soma << endl;
 
}
