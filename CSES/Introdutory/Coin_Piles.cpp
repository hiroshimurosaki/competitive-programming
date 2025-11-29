#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main(){

    ll t;
    ll a, b;
    cin >> t;

    for(ll i=0; i<t;i++){
        cin >> a >> b;
        ll maior;
        ll menor;
        if(a>b){
            maior = a;
            menor = b;
        }else{
            maior = b;
            menor = a;
        }
        ll diferenca = maior - menor;
            if((((maior%2 == 0 && menor%2 !=0) || (menor%2 == 0 && maior%2 != 0)) && (diferenca <= menor)) || ((maior%3 == 0 && menor%3 == 0) && (maior == menor)) ||
                ((diferenca%2 != 0) && (diferenca <= menor))) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
            
    }
}

    
