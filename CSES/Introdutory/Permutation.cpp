#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;

    cin >> n;

    vector<int> v(n);
    int aux = n;

    if (n == 1){
        cout << "1" << endl;
        return 0;
    } else if (n<=3){
        cout << "NO SOLUTION" << endl;
        return 0;
    } 

    for (int i =1; i<n; i+=2){

        v[i] = aux--;
                
    }
     
    for(int i = 0; i<n; i+=2){

        v[i] = aux--; 

    }


    for(auto x:v){

        cout << x << " "; 

    }

    cout << "\n";
}