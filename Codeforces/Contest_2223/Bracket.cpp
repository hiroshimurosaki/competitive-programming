#include <bits/stdc++.h>
 
using namespace std;

typedef long long ll;
 
int main(){
    
    int t;
    cin >> t;

    for(int i = 0; i<t; i++){
        int n;
        cin >> n;
        vector<char> bracket1(n);
        vector<char> bracket2(n);
        int cont = 0;

        for(int j=0; j<n; j++){

            cin >> bracket1[j];
            if(bracket1[j] == '('){
                cont++;
            } else {
                cont--;
            }

        }

        for(int j=0; j<n; j++){

            cin >> bracket2[j];

            if(bracket2[j] == '('){
                cont++;
            } else {
                cont--;
            }


        }

        if(cont == 0){
            int cont1 = 0;
            int cont2 = 0;
            int somou = 0;
            int flag = 1;
    
            for(int j=0; j<n; j++){
                if(bracket1[j] == '('){
                    cont1++;
                    somou = 1;
                } else if (cont1 - 1 < 0){
                    if(bracket1[j] == bracket2[j] || cont2 - 1 < 0){
                        cout << "NO" << endl;
                        flag = 0;
                        break;
                    } else {
                        cont1--;
                        somou = -1;
                    }
                }
                if(bracket2[j] == '('){
                    cont2++;
                } else if (cont2 - 1 < 0){
                    if(bracket1[j] == bracket2[j] || cont1 - 1 - somou < 0){
                        cout << "NO" << endl;
                        flag = 0;
                        break;
                    } else {
                        cont2--;
                    }
                }
            }
            if(flag == 1){
                cout << "YES" << endl;
            }
        } else {
            cout << "NO" << endl;
        }

        }


    return 0;
    
}