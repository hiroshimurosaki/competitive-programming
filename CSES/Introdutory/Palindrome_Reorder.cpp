#include <bits/stdc++.h>

using namespace std;

int main(){

    string n;
    int cont = 0;
    char caractere;
    string meio = "";
    string f = "";
    string aux = "";

    cin >> n;

    map<char,int> m;

    for(int i=0; i<n.size(); i++){
        m[n[i]]++;
    }

    for(auto& par:m){
        if(par.second%2 != 0){
            if(cont >= 1){
                cout << "NO SOLUTION" << endl;
                return 0;
            }
            cont++;
            caractere = par.first;
            for(int j = 0; j<(par.second); j++){
                meio += caractere;
            }
        } else {
            for(int j = 0; j<(par.second/2); j++){
                f += par.first;
                aux += par.first;
            }
        }
    }

    reverse(aux.begin(),aux.end());

    cout << f << meio << aux << endl;



}