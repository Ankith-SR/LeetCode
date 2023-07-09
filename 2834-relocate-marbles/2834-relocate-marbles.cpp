class Solution {
public:
    vector<int> relocateMarbles(vector<int>& nums, vector<int>& moveFrom, vector<int>& moveTo) {
        map<int, int> ans;
        for(auto n: nums){
            ans[n] = 1;
        }
        for(int i = 0; i<moveFrom.size(); i++){
            if(ans[moveFrom[i]] && moveFrom[i] != moveTo[i]){
                ans[moveTo[i]] = 1;
                ans[moveFrom[i]] = 0;
            }
        }
        vector<int> res;
        for(auto m: ans){
            if(m.second){
                res.push_back(m.first);
            }
        }
        return res;
    }
};