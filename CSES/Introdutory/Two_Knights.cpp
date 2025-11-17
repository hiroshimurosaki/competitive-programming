#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    
    int n;
    cin >> n;
    long long int resp;
    for(long long int i=1; i<=n;i++){
        if(i==1){
        resp = 0;
    } else if (i==2){
        resp = 6;
    } else {
        resp = ((i * i) * (i * i - 1)) / 2 - 4*(i - 1)*(i - 2);
    }
    cout << resp << endl;
}

    


}
