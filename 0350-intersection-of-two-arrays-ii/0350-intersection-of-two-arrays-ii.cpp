class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        int num1 = 0;
        int num2 = 0;
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());

        while(num1 < nums1.size() && num2 < nums2.size()){
            if(nums1[num1] == nums2[num2]){
                ans.push_back(nums1[num1]);
                num1++;
                num2++;
            }
            else if(nums1[num1] > nums2[num2]){
                num2++;
            }
            else{
                num1++;
            }
        }
        return ans;
    }
};
