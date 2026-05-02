#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    
    int t;

    cin >> t;

    for(int i = 0; i<t; i++){

        int n;

        cin >> n;

        vector<int> numeros(n);
        vector<int> resp;

        vector<int> dois;
        vector<int> tres;
        vector<int> aux;
        for(int j = 0; j<n; j++){
            
            cin >> numeros[j];

            if(numeros[j]%6 == 0){
                resp.push_back(numeros[j]);
            } else if(numeros[j]%2 == 0){
                dois.push_back(numeros[j]);
            } else if(numeros[j]%3 == 0){
                tres.push_back(numeros[j]);
            } else {
                aux.push_back(numeros[j]);
            }

        } 

        for(int j = 0; j<dois.size(); j++){

            resp.push_back(dois[j]);

        }

        for(int j = 0; j<aux.size(); j++){

            resp.push_back(aux[j]);

        }

        for(int j = 0; j<tres.size(); j++){

            resp.push_back(tres[j]);

        }

        for(int j = 0; j<resp.size(); j++){

            cout << resp[j] << " ";

        } 

        cout << endl;


    }

    return 0;
    
    
}