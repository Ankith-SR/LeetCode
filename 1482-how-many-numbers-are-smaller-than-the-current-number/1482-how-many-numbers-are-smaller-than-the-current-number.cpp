class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        unordered_map<int, int> res;
        vector<int> ans = nums;
        int n = nums.size();
        sort(ans.begin(),ans.end());
        for(int i = n-1; i>=0; i--){
            res[ans[i]] = i;
        }
        for(int i = 0; i<n; i++){
            nums[i] = res[nums[i]];
        }
        return nums;
    }
};