class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        for (int i = 0; i < nums1.size(); i++) {
            auto it = std::find(nums2.begin(), nums2.end(), nums1[i]);
            auto ng = std::find_if(std::next(it), nums2.end(), [num = nums1[i]](int element) {
                return element > num;
            });
            
            if (ng != nums2.end()) {
                result.push_back(*ng);
            } else {
                result.push_back(-1);
            }
        }
        
        return result;
    }
};

