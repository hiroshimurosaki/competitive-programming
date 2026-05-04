#include <bits/stdc++.h>
 
using namespace std;

typedef long long ll;
 
int main(){
    
    int t;
    cin >> t;

    for(int i = 0; i<t; i++){
        int n;
        cin >> n;
        vector<int> numeros(n);

        for(int j=0; j<n; j++){

            cin >> numeros[j];

        }

        ll soma = 0;

        for(int j=0; j<n; j++){

            if(numeros[j]==1 && j != n-1){
                
            } else {
                soma += numeros[j];
            }

        }

        cout << soma%676767677 << endl;


    }
    

    
    return 0;
    
}