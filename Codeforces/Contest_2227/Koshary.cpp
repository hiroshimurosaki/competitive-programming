#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    
    int t;
    cin >> t;
    int passo1;
    int passo2;
    
    for(int i = 0; i<t; i++){
            
        
        cin >> passo1 >> passo2;
        if(passo1%2 != 0 && passo2%2 != 0){
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
        
    }
    
    return 0;
    
    
}