#include <bits/stdc++.h>

using namespace std;

int main(){

    int t;

    cin >> t;

    while(t--){

        int n, x, y, z;
        cin >> n >> x >> y >> z;

        int linhasm = 0;
        int linhasn = 0;
        int linhasnia = 0;
        int tempo = 0;

        while(linhasm + linhasn < n && linhasm + linhasnia < n){
            tempo += 1;
           linhasm += x;
           linhasn += y; 

           if(tempo > z){
            linhasnia += 10*y;
           }
        }

        cout << tempo << endl;

    }

    return 0;


}