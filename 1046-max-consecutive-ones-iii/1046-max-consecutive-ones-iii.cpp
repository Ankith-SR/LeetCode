class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int j = 0;
        int m = 0;
        int count = 0;

        for(int i = 0; i < nums.size(); i++){
            if (nums[i] == 0){
                count++;
            }
            if(count == k){
                m = max(i-j+1,m);
            }
            if(count > k){
                if(nums[j] == 0){
                    count--;
                }
                j++;
            }
            m = max(i-j+1,m);
        }
        return m;
    }
};