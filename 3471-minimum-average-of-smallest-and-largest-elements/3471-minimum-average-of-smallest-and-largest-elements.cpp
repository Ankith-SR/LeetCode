class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        double sum = INT_MAX;
        sort(nums.begin(), nums.end());
        int start = 0;
        int end = nums.size()-1;
        while(start <= end){
            sum = min(sum, (nums[start]+nums[end])/2.0);
            start++;
            end--;
        }
        return sum;
    }
};