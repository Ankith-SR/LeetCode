class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int j = 0;
        int m = 0;
        int count = 0;

        for(int i = 0; i < nums.size(); i++){
            if (nums[i] == 0){
                count++;
            }
            if(count == 1){
                m = max(i-j+1,m);
            }
            if(count > 1){
                if(nums[j] == 0){
                    count--;
                }
                j++;
            }
            m = max(i-j+1,m);
        }
        return m - 1;
    }
};