class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        int one;
        int two;
        int ans = 0;
        for(int i = 0; i<nums.size(); i++){
            one = nums[i]+diff;
            two = one + diff;
            if((count(nums.begin(),nums.end(),one) != 0) && count(nums.begin(),nums.end(),two)){
                ans++;
            }
        }
        return ans;
    }
};