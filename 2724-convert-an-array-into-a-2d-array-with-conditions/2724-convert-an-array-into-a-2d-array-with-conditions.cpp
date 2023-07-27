class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(auto i:nums){
            mp[i]++;
        }
        int x = INT_MIN;
        for(auto i:mp){
            x = max(i.second,x);
        }
        vector<int> v;
        vector<vector<int>> ans(x,v);
        for(auto &j:mp){
            for(int k = 0; k<j.second; k++){
                ans[k].push_back(j.first);
            }
        }
        return ans;
    }
};