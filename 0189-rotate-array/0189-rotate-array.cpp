class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> ans;
        int n = nums.size();
        int t = k%n;
        for(int i = n-1; i>=0; i--){
            if(t != 0){
                ans.push_back(nums[i]);
                t--;
            }
        }
        reverse(ans.begin(),ans.end());
        for(int i = 0; i<n-t; i++){
            ans.push_back(nums[i]);
        }
        for(int i = 0; i<n; i++){
            nums[i] = ans[i];
        }
    }
};