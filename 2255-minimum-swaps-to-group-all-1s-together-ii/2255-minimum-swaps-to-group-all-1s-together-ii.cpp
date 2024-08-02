class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int one = 0;
        for (int num : nums) {
            if (num == 1) {
                one++;
            }
        }

        if (one == 0) return 0;

        vector<int> neww(nums.begin(), nums.end());
        neww.insert(neww.end(), nums.begin(), nums.end());

        int count = 0;
        for (int i = 0; i < one; i++) {
            if (neww[i] == 0) {
                count++;
            }
        }

        int ans = count;
        for (int i = one; i < neww.size(); i++) {
            if (neww[i] == 0) {
                count++;
            }
            if (neww[i - one] == 0) {
                count--;
            }
            ans = min(ans, count);
        }
        return ans;
    }
};
