#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main(){

    ll t;
    ll a, b;
    cin >> t;

    for(ll i = 0; i<t; i++){
        cin >> a >> b;
    
        ll maior = max(a,b);
        ll menor = min(a,b);
        ll diferenca = maior - menor;
        
        if(maior > 2*menor){
            cout << "NO" << endl;
        } else {
            ll x = maior - diferenca*2;
    
            if(x%3 == 0){
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
    
        }
    }

    return 0;


}

    
