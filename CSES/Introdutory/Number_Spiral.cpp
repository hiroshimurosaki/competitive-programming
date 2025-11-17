#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main(){

    ll n;
    ll x, y;
    cin >> n;
    ll resp;
    
    for(int i=0; i<n; i++){
        cin >> x >> y;

        if(x>y){
            resp = (x*x)-(x-1);
            if(y%2 == 0){
                resp += x-y;
            } else {
                resp -= x-y;
            }
        } else {
            resp = (y*y)-(y-1);
            if(x%2 == 0){
                resp += y-x;
            } else {
                resp -= y-x;
            }
        }
        
        cout << resp << endl;


    }
    
}