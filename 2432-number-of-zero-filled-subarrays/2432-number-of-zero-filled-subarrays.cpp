class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long n = 0;
        int ans = 0;
        for(int i = 0; i<nums.size();i++){
            if(nums[i] == 0){
                n += ++ans;
            }
            else{
                ans = 0;
            }
        }
        return n;
    }
};