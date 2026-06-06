class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);

        int leftsum = 0;
        for(int i = 0; i < n; i++){
            ans[i] = leftsum;
            leftsum += nums[i];
        }

        int rightsum = 0;
        for(int i = n - 1; i >= 0; --i){
            ans[i] = abs(ans[i] - rightsum);
            rightsum += nums[i];
        }

        return ans;
    }
};