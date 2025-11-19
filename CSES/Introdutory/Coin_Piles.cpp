#include <bits/stdc++.h>

using namespace std;

int main(){

    int t;
    int a, b;
    cin >> t;

    for(int i=0; i<t;i++){
        cin >> a >> b;

        if(((a <= 1) && (b <= 1)) || (b == 0) || (a == 0)){
            cout << "NO" << endl;
        } 
        
        else if(a%2==0){
            if(b%2==0){
                cout << "NO"<< endl;
            } else {
                cout << "YES"<< endl;
            }
        } else{
            cout << "YES" << endl;
        }

    }
}