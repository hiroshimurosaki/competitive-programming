#include <bits/stdc++.h>

using namespace std;

class Solution {
    public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> numeros;
        map<int,int> indices;
        for(int i = 0; i<nums.size(); i++){
            if(numeros.count(target - nums[i]) > 0){
                vector<int> resp;
                resp.emplace_back(i);
                resp.emplace_back(indices[target - nums[i]]);
                return resp;
            } else {
                numeros.insert(pair<int,int>(nums[i], target - nums[i]));
                indices.insert(pair<int,int>(nums[i],i));
            }
            
        }
        return {};
    }
};

int main(){

    int n;
    int ans;
    cin >> n;
    cin >> ans;
    vector<int> vetor(n);
    Solution sol;
    for(int i = 0; i<n;i++){
        cin >> vetor[i];
    }

    

    vector<int> resp = sol.twoSum(vetor, ans);

    for(int i = 0; i < resp.size(); i++){
        cout << resp[i] << " ";
    }
    cout << endl;

    return 0;
}