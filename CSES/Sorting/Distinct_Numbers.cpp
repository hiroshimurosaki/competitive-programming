#include <bits/stdc++.h>

using namespace std;


int main(){
    
    map<int,int> m;
    int n;
    int cont = 0;

    cin >> n;
    
    for(int i = 0; i<n; i++){
        int aux;
        cin >> aux;
        if(!m[aux]){
            m[aux] = 1;
            cont++;
        } else {
            m[aux]++;
        }
    }

    cout << cont << endl;

}