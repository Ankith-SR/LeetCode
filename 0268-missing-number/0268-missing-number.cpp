class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int a = nums.size();
        int n = accumulate(nums.begin(),nums.end(),0);
        int add = (a*(a+1))/2;
        return add-n;
    }
};