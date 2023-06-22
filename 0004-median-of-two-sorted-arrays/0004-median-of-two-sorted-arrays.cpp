class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        for(auto num : nums1){
            ans.push_back(num);
        }
        for(auto num : nums2){
            ans.push_back(num);
        }
        int i=0,j=0;
        sort(ans.begin(),ans.end());
        int len = ans.size();
        if(len%2 == 1){
            return ans[len/2];
        }
        else{
            int pre = len/2;
            double res = (ans[pre-1]+ans[pre]);
            return res/2;
        }
    }
};