class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int ans = 0;
        for(int i = 0; i<accounts.size(); i++){
            int res = 0;
            res = accumulate(accounts[i].begin(),accounts[i].end(),0);
            if(res>ans){
                ans = res;
            }
        }
        return ans;
    }
};