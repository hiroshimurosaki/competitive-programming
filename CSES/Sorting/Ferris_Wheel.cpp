#include <bits/stdc++.h>

using namespace std;

int main(){
 
    int n, x;
    cin >> n >> x;
    vector<int> c(n);
    int soma = 0;

    for(int i=0; i<n; i++){

        cin >> c[i];

    }

    sort(c.begin(), c.end());

    int i = 0;          
    int j = n - 1;      

    while(i <= j) {

        if(c[i] + c[j] <= x) {
            i++; 
            j--; 
        } 
        else {

            j--;
        }

        soma++;
    }

    cout << soma << endl;

}