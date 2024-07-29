class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> ans;
        int alice = 0;
        int bob = 1;
        while (alice < nums.size() && bob < nums.size()) {
            ans.push_back(nums[bob]);
            ans.push_back(nums[alice]);
            bob += 2;
            alice += 2;
        }
        return ans;
    }
};
