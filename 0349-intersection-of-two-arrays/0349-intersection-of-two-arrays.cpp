class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        unordered_set<int> count;

        for(auto i : nums1){
            count.insert(i);
        }
        for(auto i : nums2){
            if(count.find(i) != count.end()){
                ans.push_back(i);
                count.erase(i);
            }
        }
        return ans;
    }
};