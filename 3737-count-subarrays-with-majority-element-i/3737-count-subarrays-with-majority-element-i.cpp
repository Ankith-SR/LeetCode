class Solution {
public:
    int countMajoritySubarrays(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> pre(2 * n + 1, 0);
        pre[n] = 1;
        int count = n;
        long long presum = 0;
        long long ans = 0;
        for(int x : nums){
            if(x == target){
                presum += pre[count];
                count++;
                pre[count]++;
            }
            else{
                count--;
                presum -= pre[count];
                pre[count]++;
            }
            ans += presum;
        }
        return ans;
    }
};