#include <bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){

        int n;
        cin >> n;
        vector<int> torres(n);
        int maiortorre = 0;
        int menortorre = 8;
        for(int i=0; i<n; i++){
            cin >> torres[i];
            if(torres[i] < menortorre){
                menortorre = torres[i];
            } if(torres[i] > maiortorre){
                maiortorre = torres[i];
            }
        }

        cout << (maiortorre-menortorre) + 1 << endl;


    }
    return 0;

}