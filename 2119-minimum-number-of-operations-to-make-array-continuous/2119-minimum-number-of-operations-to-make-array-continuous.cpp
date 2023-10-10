class Solution {
public:
    int minOperations(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int left = 0;
        int ans = 1;
        int n = nums.size();
        int bigger = 1;
        for(int i=1;i<nums.size();i++) {
            if((nums[i]-nums[left]) <= (n-1) && nums[i]-nums[i-1] != 0) {
                bigger++;
            }
            int r = left;
            while(left <= i && nums[i]-nums[left] > (n-1)) {
                if(left != r && nums[left] != nums[left-1]) {
                    bigger--;
                }
                left++;
            }
            ans = max(ans, bigger);
        }
        return n-ans;
    }
};