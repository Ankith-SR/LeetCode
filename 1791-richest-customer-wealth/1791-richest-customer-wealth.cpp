class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int ans = 0;
        int sum = 0;
        for(int i = 0; i<accounts.size(); i++){
            sum = accumulate(accounts[i].begin(),accounts[i].end(),0);
            if(sum>ans){
                ans = sum;
            }
        }
        return ans;
    }
};