class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool> res;
        for(int i = 0; i<l.size(); i++){
            vector<int> ans;
            bool flag = 1;
            for(int j = l[i]; j<=r[i]; j++){
                ans.push_back(nums[j]);
            }
            sort(ans.begin(),ans.end());
            for(int it = 2; it<ans.size(); it++){
                if(ans[it] - ans[it-1] != ans[1]-ans[0]){
                    flag = 0;
                    break;
                }
            }
            if(flag){
                res.push_back(true);
            }
            else{
                res.push_back(false);
            }
        }
        return res;
    }
};