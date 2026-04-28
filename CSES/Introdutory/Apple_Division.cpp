#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll ans = LLONG_MAX;

void solve(vector<ll>& apples, int i, ll s1, ll s2){
    if(i == apples.size()){
        ans = min(ans, abs(s1 - s2));
        return;
    }
    solve(apples, i+1, s1 + apples[i], s2); 
    solve(apples, i+1, s1, s2 + apples[i]); 
}

int main(){

    int n;

    cin >> n;

    vector<ll> apples(n);

    ll soma = 0;

    for(int i=0; i<n; i++){

        cin >> apples[i];

    }

    solve(apples,0,0,0);

    cout << ans << endl;
    
    return 0;

}