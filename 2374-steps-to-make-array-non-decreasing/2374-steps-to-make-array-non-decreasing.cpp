class Solution {
public:
    int totalSteps(vector<int>& nums) {
        vector<int> res(nums.size());
        stack<int> pda;
        int ans = 0;
        for(int i = nums.size()-1; i>=0; i--){
            while(!pda.empty() && nums[i] > nums[pda.top()]){
                res[i] = max(res[i]+1,res[pda.top()]);
                pda.pop();
            }
            pda.push(i);
            ans = max(ans,res[i]);
        }
        return ans;
    }
};