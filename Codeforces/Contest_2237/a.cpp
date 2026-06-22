#include <bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n;
        int menor = INT_MAX;
        int menorsoma = 0;
        cin >> n;
        vector<int> torres(n);

        for(int i=0; i<n; i++){
            cin >> torres[i];
            menorsoma += torres[i];
        }
        int soma = 0;
        int somaaux = 0;

        for(int i=0; i<n; i++){
            
            soma += torres[i];
            somaaux = soma;
            for(int j=i+1; j<n; j++){
                if(torres[j]>=torres[i]){
                    somaaux+=torres[i];
                    //cout << "somou +" << torres[i] << " , totalizando: " << somaaux << endl;
                } else {
                    somaaux+=torres[j];
                   // cout << "somou +" << torres[j] << " , totalizando: " << somaaux << endl;
                }
                //cout << "aqui acabou a it "<< j << " do for2 e a somaaux eh:" << somaaux << endl;
            }
           // cout << "acabou de sair do for2 e a somaaux eh:" << somaaux << endl;
            //cout << "menor soma: " << menorsoma << endl;
            if(somaaux < menorsoma){
                menorsoma = somaaux;
                //cout << "o menor agora eh: " << menorsoma << endl;
            }
        }
        cout << menorsoma << endl;

    }

    return 0;

}