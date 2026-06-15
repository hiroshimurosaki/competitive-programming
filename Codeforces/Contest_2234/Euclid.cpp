#include <bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin >> t;

    for(int i = 0; i<t; i++){
        int n;
        cin >> n;
        vector<int> numeros(n);

        for(int j = 0; j<n; j++){
            cin >> numeros[j];
        }

        sort(numeros.rbegin(), numeros.rend());

        bool flag = true;

        for(int j = 0; j<n-2; j++){
            if(numeros[j]%(numeros[j+1]) != numeros[j+2]){
                cout << "-1" << endl;
                flag = false;
                break;
            }
        }

        if(flag == true){
            cout << numeros[0] << " " << numeros[1] << endl; 
        }

    }

    return 0 ;
    
}