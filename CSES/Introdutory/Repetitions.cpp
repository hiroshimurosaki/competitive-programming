#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
 
    string s;

    cin >> s;
    int cont = 1;
    int longest = 1;

    for(int i=0; i<s.size()-1; i++){
        char aux = s[i];
        char auxprox = s[i+1];

        if(aux == auxprox){
            cont++;
            if(cont > longest){
                longest = cont;
            }
        } else{
            cont = 1;
        }

    }

    cout << longest << endl;
 
    
 
}
