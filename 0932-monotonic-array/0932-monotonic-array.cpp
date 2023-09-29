class Solution {
public:
    bool isMonotonic(std::vector<int>& nums) {
        return is_sorted(nums.begin(), nums.end()) || is_sorted(nums.rbegin(), nums.rend());
    }
};