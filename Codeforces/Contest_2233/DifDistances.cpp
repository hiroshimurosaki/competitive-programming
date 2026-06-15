#include <bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> numeros(n*4);
        int i = 1;

        while(n!=0){

            if(n%2 != 0){
    
                cout << i << " ";
                cout << i << " ";
                cout << i+1 << " ";
                cout << i << " ";
                cout << i+1 << " ";
                cout << i+2 << " ";
                cout << i << " ";
                cout << i+2 << " ";
                cout << i+1 << " ";
                cout << i+1 << " ";
                cout << i+2 << " ";
                cout << i+2 << " ";
                n-=3;
                i+=3;
                
    
            } else {
    
                    cout << i << " ";
                    cout << i+1 << " ";
                    cout << i << " ";
                    cout << i+1 << " ";
                    cout << i+1 << " ";
                    cout << i << " ";
                    cout << i << " ";
                    cout << i+1 << " ";
                    n-=2;
                    i+=2;
        
            }
        }
        cout << endl;

    }

    return 0;

}