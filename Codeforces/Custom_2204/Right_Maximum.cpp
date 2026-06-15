#include <bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        priority_queue<pair<int,int>> pq;
        vector<int> numeros;
        for(int i = 0; i<n; i++){
            int aux;
            cin >> aux;
            pq.push({aux,i});
            numeros.push_back(aux);
        }

        int cont = 0;

        while(!pq.empty()){

            cout << pq.

        }
        
        
        
        int i = numeros.size()-1;
        while(!pq.empty()){
            
            int index = pq.top().second;
            
            while(i >=index){

                cout << index << endl;
                cout << i << endl;
                
                pq.pop();
                i--;
            }
            cout << "ponto" << endl << endl;
            cont++;
        }

        cout << cont << endl;

    }






}