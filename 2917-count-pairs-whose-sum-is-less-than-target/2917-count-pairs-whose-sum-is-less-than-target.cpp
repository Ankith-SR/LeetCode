class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
                sort(begin(nums), end(nums));
        int lo = 0;
        int hi = size(nums) - 1;
        int ans = 0;        
        while (lo < hi) {
            if (nums[lo] + nums[hi] < target) {
                ans += hi - lo;
                ++lo;
            } else {
                --hi;
            }
        }
        return ans;
    }
};