#include <bits/stdc++.h>

using namespace std;

bool isPowerOfTwo(int n) {
    return (n > 0) && ((n & (n - 1)) == 0);
}

int main(){
    
    long long int n;
    
    cin >> n;
    
    cout << n;

    while(n != 1){

        if(n%2==0){
            if(isPowerOfTwo(n)){
                while(n!=1){
                    n = n/2; 
                    cout << " ";
                    cout << n;
                }
            } else {
                n = n/2;    
                cout << " ";
                cout << n;
            }
        } else {
            n = (n*3) + 1;
            cout << " ";
            cout << n;
        }

    }

}