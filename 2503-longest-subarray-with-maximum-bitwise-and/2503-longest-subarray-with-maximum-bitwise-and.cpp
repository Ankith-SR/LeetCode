class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int max_val = *max_element(nums.begin(), nums.end());
        int count = 0, current_len = 0;
        
        for (int num : nums) {
            if (num == max_val) {
                current_len++;
                count = max(count, current_len);
            } 
            else{
                current_len = 0;
            }
        }
        return count;
    }
};
