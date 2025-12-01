#include <bits/stdc++.h>

using namespace std;

string decimalToBinary(int n, int maxsize) {
    string binaryString = "";
    if (n == 0) {
        binaryString += "0";
        if(binaryString.size() < maxsize){
        int falta = maxsize - binaryString.size();
        for(int i =0; i<falta; i++){
            binaryString += '0';
        }
    }
    }

    while (n > 0) {
        binaryString += (n % 2 == 0 ? '0' : '1');
        n /= 2;
    }
    if(binaryString.size() < maxsize){
        int falta = maxsize - binaryString.size();
        for(int i =0; i<falta; i++){
            binaryString += '0';
        }
    }
    reverse(binaryString.begin(), binaryString.end());
    return binaryString;
}

int main(){

    int n;

    cin >> n;

    for(int i = 0; i<pow(2,n); i++){
        cout << decimalToBinary(i,n) << endl;
    }


}