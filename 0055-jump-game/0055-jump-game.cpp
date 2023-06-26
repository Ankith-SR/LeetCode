class Solution {
public:
    bool canJump(vector<int>& nums) {
        int lastReachableIndex = 0;
        for (int i = 0; i <= lastReachableIndex && lastReachableIndex < nums.size() - 1; i++) {
            lastReachableIndex = max(lastReachableIndex, i + nums[i]);
        }
        return lastReachableIndex >= nums.size() - 1;
    }
};
