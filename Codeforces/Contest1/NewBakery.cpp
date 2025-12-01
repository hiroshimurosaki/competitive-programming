#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main(){

    int t;
    ll n, a ,b;

    cin >> t;

    for(int i = 0; i<t; i++){
        ll lucro = 0;

        cin >> n >> a >> b;
            ll aux1 = (b+1) - a;
            if(aux1>n){
                a = aux1; 
            }

            if(a >= b){
                lucro = a*n;
            } else {
                lucro += 
            }
            

            
        }
        cout << lucro << endl;
    }
    

}