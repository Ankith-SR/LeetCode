class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int n = nums.size();

        int mx = 0;
        vector<int> prefixgcd(n);

        for (int i = 0; i < n; i++) {
            mx = max(mx, nums[i]);
            prefixgcd[i] = __gcd(nums[i], mx);
        }

        sort(prefixgcd.begin(), prefixgcd.end());

        int left = 0;
        int right = n - 1;

        long long ans = 0;

        while (left < right) {
            ans += __gcd(prefixgcd[left], prefixgcd[right]);
            left++;
            right--;
        }

        return ans;
    }
};