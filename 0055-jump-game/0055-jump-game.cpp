class Solution {
public:
    bool canJump(vector<int>& nums) {
        int ans = 0;
        for (int i = 0; i<=ans; i++) {
            if(ans < nums.size() - 1){
                ans = max(ans, i + nums[i]);
            }
        }
        return ans >= nums.size() - 1;
    }
};
