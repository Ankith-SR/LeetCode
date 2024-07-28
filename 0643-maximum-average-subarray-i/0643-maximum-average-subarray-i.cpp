class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double maxsum = 0, current = 0;

        for (int i = 0; i < k; i++){
            current += nums[i];
        }
        maxsum = current;

        for(int i = k; i < nums.size(); i++){
            current += nums[i] - nums[i-k];
            maxsum = max(maxsum, current);
        }
        return maxsum/k;
    }
};