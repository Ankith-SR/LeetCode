class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        unordered_set<int> st(nums.begin(), nums.end());
        int mini = *min_element(nums.begin(), nums.end());
        int maxi = *max_element(nums.begin(), nums.end());

        vector<int> ans;
        for(int i = mini; i <= maxi; i++){
            if(!st.contains(i)){
                ans.push_back(i);
            }
        }
        return ans;
    }
};