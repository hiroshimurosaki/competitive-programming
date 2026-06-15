#include <bits/stdc++.h>

using namespace std;

class Solution {
    public:
    bool isPalindrome(int x) {
        
        string numbers;
        numbers = to_string(x);

        for(int i = 0; i<numbers.size()/2; i++){
            if(numbers[i] != numbers[numbers.size() - i - 1]){
                return false;
            }
        }

        return true;
    }
};

int main(){

    int n;
    Solution sol;
    cin >> n;

    cout << sol.isPalindrome(n) << endl;

    return 0;

}