class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        auto a = find(nums.begin(), nums.end(), target);
        if (a != nums.end()) {
            ans.push_back(distance(nums.begin(), a));
        } else {
            ans.push_back(-1);
        }
        
        auto b = find(nums.rbegin(), nums.rend(), target);
        if (b != nums.rend()) {
            ans.push_back(nums.size() - 1 - distance(nums.rbegin(), b));
        } else {
            ans.push_back(-1); 
        }
        
        return ans;
    }
};
