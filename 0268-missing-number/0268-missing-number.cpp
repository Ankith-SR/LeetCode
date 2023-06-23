class Solution {
public:
    int missingNumber(vector<int>& nums) {
        unordered_map<int, int> ans;
        if(nums.size() == 1){
            if(nums[0] != 1){
                return 1;
            }
            else{
                return nums[0]-1;
            }
        }
        for(auto x : nums){
            ans[x]++;
        }
        for(int i = 1; i<nums.size()+1; i++){
            if(ans[i]==0){
                return i;
            }
        }
        return 0;
    }
};