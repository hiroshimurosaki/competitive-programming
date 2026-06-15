#include <bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){

        int n, k;
        cin >> n >> k;
        string numeros;
        cin >> numeros;
        
        bool flag = false;
        int cont = 0;
        for(int i=0;i<n; i++){
            if(numeros[i] == '1' && i != k-1){
                cont++;
            }
        }
        if(numeros[k-1] == '1'){
            flag = true;
        }

        if(cont%2 == 0){
            if(flag){
                cout << "NO" << endl;
            } else {
                cout << "YES" << endl;
            }
        } else {
            if(flag){
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }

    }
    return 0;

}

