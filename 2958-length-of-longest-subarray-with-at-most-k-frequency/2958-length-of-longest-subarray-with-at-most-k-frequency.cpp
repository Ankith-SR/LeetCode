class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int ans = 0, start = -1;
        unordered_map<int, int> fq;

        for(int end = 0; end < nums.size(); end++){
            fq[nums[end]]++;
            while(fq[nums[end]] > k){
                start++;
                fq[nums[start]]--;
            }
            ans = max(ans, end - start);
        }
        return ans;
    }
};