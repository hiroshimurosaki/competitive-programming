#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main(){

    ll t;
    ll x, y;
    cin >> t;
    
    for(ll i = 0; i<t; i++){

        cin >> x >> y;

        ll maior = max(x,y);
        ll pos = 0;
        
        if(maior == x){
            if(x%2==0){
                pos = x*x - (y - 1);
            } else {
                pos = (x-1)*(x-1) + y;
            }
        } else {
            if(y%2!=0){
                pos = y*y - (x - 1);
            } else {
                pos = (y-1)*(y-1) + x;
            }
        }

        cout << pos << endl;

    }

    return 0;
    
}