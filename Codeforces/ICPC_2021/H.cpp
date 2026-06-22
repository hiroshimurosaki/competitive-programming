#include <bits/stdc++.h>

using namespace std;

int main(){

    int t, d, m;
    cin >> t >> d >> m;
    vector<int> refeicoes(m);
    int tempo = 0;
    
    bool flag = false;
    
    for(int i=0; i<m; i++){
        cin >> refeicoes[i];
        if(i==0){
            if(refeicoes[0] >= t){
                flag = true;
            }
        } else {
            if(refeicoes[i] - refeicoes[i-1] >= t){
                flag = true;
            }
        }
    }
    if((refeicoes.empty() && d >= t) || (d - refeicoes[m-1] >= t )){
        flag = true;
    }

    if(flag){
        cout << "Y" << endl;
    } else {
        cout << "N" << endl;
    }

    return 0;

}