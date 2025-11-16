#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
 
    int n;
 
    cin >> n;
 
    vector<bool> v(n);
 
    for(int i=0; i<n-1; i++){
        
        int aux;
        cin >> aux;
        v[aux-1] = true;
 
    }
 
    for(int i=0; i<n-1; i++){
        
        if(!v[i]){
            cout << i+1 << endl;
            return 0;
        }
        if(!v[n-1-i]){
            cout << n-i << endl;
            return 0;
        }
 
    }
 
}
