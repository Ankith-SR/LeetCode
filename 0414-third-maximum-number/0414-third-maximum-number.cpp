class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.rbegin(), nums.rend());
        nums.erase(unique(nums.begin(), nums.end()), nums.end());
        return nums.size() < 3 ? nums[0] : nums[2];
    }
};