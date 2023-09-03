class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        int j = 0;
        int ans = 1;    
        sort(nums.begin(), nums.end(), greater<int>());
        for(int i=1; i<nums.size(); i++){
            if(nums[j]- nums[i] > k){
                ans++;
                j = i;
            }
        }
        return ans;
    }
};