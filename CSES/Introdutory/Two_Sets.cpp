#include <bits/stdc++.h>
#include <algorithm>
typedef long long int ll;

using namespace std;

int main(){

    ll n;

    cin >> n;
    ll soma = 0;
    for(ll i = 1; i<=n; i++){
        soma += i;
    }
    if(soma%2 != 0){
        cout << "NO" << endl;
    } else {

                vector<ll> v1;
                vector<ll> v2;
                ll soma1 = 0;
                ll soma2 = 0;

                ll desejado = soma/2;

                for(ll i = n; i>=1; i--){
                    if(soma1+i<=desejado){
                        v1.push_back(i);
                        soma1+=i;
                    }else{
                        v2.push_back(i);
                        soma2+=i;
                    }
                }

                cout << "YES" << endl;
                cout << v1.size() << endl;
                for(ll i = 0; i<v1.size(); i++){
                    cout << v1[i] << " ";
                } cout << endl;
                cout << v2.size() << endl;
                for(ll i = 0; i<v2.size(); i++){
                    cout << v2[i] << " ";
                } cout << endl;




    }


}