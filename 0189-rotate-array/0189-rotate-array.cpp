class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> ans;
        int n = nums.size();
        int temp = k%n;
        for(int i = n-1; i>=0; i--){
            if(temp != 0){
                ans.push_back(nums[i]);
                temp--;
            }
        }
        reverse(ans.begin(),ans.end());
        for(int i = 0; i<n-temp; i++){
            ans.push_back(nums[i]);
        }
        for(int i = 0; i<n; i++){
            nums[i] = ans[i];
        }
    }
};