class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans;
        int left = 0;
        int right = n;
        while(right<nums.size()){
            ans.push_back(nums[left]);
            ans.push_back(nums[right]);
            left++;
            right++;
        }
        return ans;
    }
};