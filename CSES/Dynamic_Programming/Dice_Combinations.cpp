#include <bits/stdc++.h>

using namespace std;


int main(){
    
    int n;
    
    cin >> n;
    
    vector<int> dp(n,0);

    dp[0] = 1;

    for(int i=1; i<n; i++){

        dp[i] = dp[i-1] + dp[0] + 1;
        
    }


}