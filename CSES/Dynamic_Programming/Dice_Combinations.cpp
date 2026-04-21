#include <bits/stdc++.h>
 
using namespace std;
 
const int mod = 1e9 + 7;
 
vector<int> dp(10000000,-1);
 
 
int formasdecalcularn (int numero){
 
    if(numero < 0) return 0;
    if(dp[numero] != -1) return dp[numero];
 
    int aux = 0;
 
    for(int i=1; i<=6; i++){
 
        aux = (aux + formasdecalcularn(numero - i))%mod;
 
    }
 
    dp[numero] = aux;
    
    return dp[numero];
 
}
    
 
 
int main(){
 
    int n;
 
    cin >> n;
    
    dp[0] = 1;
    dp[1] = 1;
 
    
 
    cout <<  formasdecalcularn(n) << endl;
 
 
    return 0;

}