#include <bits/stdc++.h>

using namespace std;

int main(){

    int t;

    cin >> t;

    for(int i = 0; i < t; i++){

        int n;
        cin >> n;

        int m = 2 * n;

        vector<int> a(m);
        for(int j = 0; j < m; j++){
            cin >> a[j];
        }

        vector<int> po(m, 0);
        int l = 0, r = -1;
        for(int c = 0; c < m; c++){
            int k;
            if(c > r){
                k = 0;
            } else {
                k = min(po[l + r - c], r - c);
            }
            while(c-k-1 >= 0 && c+k+1 < m && a[c-k-1] == a[c+k+1]){
                k++;
            }
            po[c] = k;
            if(c + k > r){
                l = c - k;
                r = c + k;
            }
        }

        vector<int> pe(m, 0);
        int l2 = 0, r2 = -1;
        for(int c = 0; c < m - 1; c++){
            int k;
            if(c >= r2){
                k = 0;
            } else {
                k = min(pe[l2 + r2 - c - 1], r2 - c - 1);
            }
            while(c-k >= 0 && c+k+1 < m && a[c-k] == a[c+k+1]){
                k++;
            }
            pe[c] = k;
            if(k > 0 && c + k > r2){
                l2 = c - k + 1;
                r2 = c + k;
            }
        }

        vector<int> p1(n, -1), p2(n);
        for(int j = 0; j < m; j++){
            if(p1[a[j]] == -1){
                p1[a[j]] = j;
            } else {
                p2[a[j]] = j;
            }
        }

        vector<vector<int>> porSoma(2 * m);
        for(int v = 0; v < n; v++){
            porSoma[p1[v] + p2[v]].push_back(v);
        }

        int ans = 0;
        vector<bool> disponivel(n, false);

        for(int c = 0; c < m; c++){
            int R = po[c];
            vector<int> marcados;
            for(int j = 0; j < (int)porSoma[2 * c].size(); j++){
                int v = porSoma[2 * c][j];
                if((p2[v] - p1[v]) / 2 <= R){
                    disponivel[v] = true;
                    marcados.push_back(v);
                }
            }
            int mex = 0;
            bool central = false;
            while(true){
                if(mex < n && disponivel[mex]){
                    mex++;
                } else if(!central && mex == a[c]){
                    central = true;
                    mex++;
                } else {
                    break;
                }
            }
            ans = max(ans, mex);
            for(int j = 0; j < (int)marcados.size(); j++){
                disponivel[marcados[j]] = false;
            }
        }

        for(int c = 0; c < m - 1; c++){
            int R = pe[c];
            if(!R) continue;
            vector<int> marcados;
            for(int j = 0; j < (int)porSoma[2 * c + 1].size(); j++){
                int v = porSoma[2 * c + 1][j];
                if((p2[v] - p1[v] + 1) / 2 <= R){
                    disponivel[v] = true;
                    marcados.push_back(v);
                }
            }
            int mex = 0;
            while(mex < n && disponivel[mex]) mex++;
            ans = max(ans, mex);
            for(int j = 0; j < (int)marcados.size(); j++){
                disponivel[marcados[j]] = false;
            }
        }

        cout << ans << endl;

    }

    return 0;


}
