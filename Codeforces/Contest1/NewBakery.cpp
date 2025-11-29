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

        if(b<=a){
            lucro = n*a;
        }else{
            ll aux = b-a;
            ll as = a;
            if(aux > n){
                aux -= aux-a;
                as += aux-a;
            } else {
                as -= aux;
            }
            if(aux == 1){
                lucro = (a*(n-1))+b;
            } else {
                lucro += (a + as + b)*(aux/2);
                lucro += a*(n-aux);
            }
        }
        cout << lucro << endl;
    }
    

}