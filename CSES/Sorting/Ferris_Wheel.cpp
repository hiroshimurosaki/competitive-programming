#include <bits/stdc++.h>

using namespace std;

int main(){
 
    int n, x;
    vector<int> c;
    map<int, int> g;
    cin >> n >> x;
    int soma = 0;

    for(int i=0; i<n; i++){

        int aux;
        cin >> aux;
        int temp = x-aux;
        c.push_back(aux);

        if(!g[temp]){
            g[temp] += 1;
            soma += 1;
        } else {
            g[temp] -= 1;
        }

    }

    for(auto it = g.begin(); it!= g.end(); it++){
        cout << it->first <<  " " << it->second << endl;
    }


    

}