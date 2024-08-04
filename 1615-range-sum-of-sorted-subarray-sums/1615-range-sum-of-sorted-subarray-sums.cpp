class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        vector<int> sum;
        int current;

        for(int i = 0; i < n; i++){
            current = 0;
            for(int j = i; j < n; j++){
                current += nums[j];
                sum.push_back(current);
            }
        }
        
        sort(sum.begin(), sum.end());
        int ans = 0;
        int mod = 1000000007;

        for (int k = left - 1; k < right; ++k) {
            ans = (ans + sum[k]) % mod;
        }
        
        return ans;
    }
};