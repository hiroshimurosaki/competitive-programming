#include <bits/stdc++.h>

using namespace std;

int main(){

    int t;
    
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        vector<int> amigos(n);
        map<int,int> nums;
        vector<int> numeros;
        int cont = 0;

        for(int i = 0; i<n; i++){
            cin >> amigos[i];
        }

        sort(amigos.begin(), amigos.end());

        for(int i = 0; i<n; i++){
            if(!nums[amigos[i]]){
                nums[amigos[i]] = amigos[i];
                numeros.push_back(amigos[i]);
                cont++;
            }
        }

        

        
        if(numeros%2 == 0){
            if(count(amigos.begin(), amigos.end(), numeros[cont/2]) > count(amigos.begin(), amigos.end(), numeros[(cont/2) - 1])){
                int meio = numeros[cont/2];
            } else {
                int meio = numeros[(cont/2) - 1];
            }
        } else {
            int meio = numeros[cont/2];
        }
        cout << meio << endl;
        int contagem = 0;
        while(amigos.front() != meio && amigos.back() != meio){
            int primeiro = amigos.front();
            int ultimo = amigos.back();

            if(primeiro != meio && ultimo != meio){
                amigos.erase(amigos.begin());
                amigos.pop_back();
                contagem++;
            } else if(primeiro != meio && primeiro == meio){
                amigos.erase(amigos.begin());
                contagem++;
            } else if(primeiro == meio && primeiro != meio){
                amigos.pop_back();
                contagem++;
            } else {
                break;
            }

        }

        cout << contagem << endl;
       
    }

}