#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

bool isPalindrome(int x) {
    // Negative numbers and numbers ending in 0 (except 0 itself) are not palindromes
    if (x < 0 || (x % 10 == 0 && x != 0)) {
        return false;
    }

    int reversedHalf = 0;
    while (x > reversedHalf) {
        reversedHalf = (reversedHalf * 10) + (x % 10);
        x /= 10;
    }

    // For even digits: x == reversedHalf
    // For odd digits: x == reversedHalf / 10 (gets rid of the middle digit)
    return x == reversedHalf || x == reversedHalf / 10;
}

int main(){

    int t;
    cin >> t;

    for(int  i = 0; i<t; i++){

        ll n;
        cin >> n;

        ll aux1 = n/12;
        ll aux2 = aux1 * 12;

        bool flag = true;
        while(!isPalindrome(n-aux2)){
            aux2 -= 12;
            if(aux2<0){
                cout << "-1" << endl;
                flag = false;
            } 
        }

        if(flag){
            cout << n-aux2 << " " << aux2 << endl;
        }

    }

    return 0;
    
}