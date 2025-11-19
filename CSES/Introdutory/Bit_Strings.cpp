#include <bits/stdc++.h>

using namespace std;

const int m = 10e8 + 7;

long long modpow(long long x, int n, long long m) {
    if (n == 0) return 1;

    long long u = modpow(x, n / 2, m);
    
    u = (u * u) % m; 
    
    if (n % 2 == 1) {
        u = (u * x) % m; 
    }
    return u;
}

int main(){

    int n;
    cin >> n;
    cout << modpow(2,n,m) << endl;

}