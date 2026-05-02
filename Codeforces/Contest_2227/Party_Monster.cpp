#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    
    int t;

    cin >> t;

    for(int i = 0; i<t; i++){

        int x;

        cin >> x;

        string s;
        cin >> s;

        int cont = 0;
        for(int j = 0; j<x; j++){

            if(s[j] == '('){
                cont++;
            } else if(s[j] == ')'){
                cont--;
            }
        }

        if(cont != 0){
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }

    }

    return 0;
    
    
}