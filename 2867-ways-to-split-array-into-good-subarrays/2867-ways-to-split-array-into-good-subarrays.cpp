class Solution {
public:
    int numberOfGoodSubarraySplits(vector<int>& nums) {
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) {
                ans.push_back(i);
            }
        }
        
        if (ans.size() < 1) {
            return 0;
        }
        if(ans.size() == 1){
            return 1;
        }
        
        long long count = ans[1] - ans[0];
        for (int i = 1; i < ans.size() - 1; i++) {
            count = (count * (ans[i+1] - ans[i])) % (int(pow(10, 9)) + 7);
        }
        
        return count;
    }
};




