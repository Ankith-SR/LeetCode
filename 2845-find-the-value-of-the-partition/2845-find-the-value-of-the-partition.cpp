class Solution {
public:
    int findValueOfPartition(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int min = 100000000000;
        for(int i = 1; i<nums.size();i++){
            if(abs(nums[i]-nums[i-1]<min)){
                min = abs(nums[i] - nums[i-1]);
            }
        }
        return min;
    }
};