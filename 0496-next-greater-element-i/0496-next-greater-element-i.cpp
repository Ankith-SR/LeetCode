class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> mp;
        stack<int> pda;
        int n = nums2.size();
        int m = nums1.size();
        pda.push(nums2[n-1]);
        for(int i = n-2; i>=0; i--){
            while(!pda.empty() && pda.top() <= nums2[i]){
                pda.pop();
            }
            if(!pda.empty()){
                mp[nums2[i]] = pda.top();
            }
            pda.push(nums2[i]);
        }
        vector<int> ans(m,-1);
            for(int i = 0; i<m; i++){
                if(mp[nums1[i]] != 0){
                    ans[i] = mp[nums1[i]];
                }
            } 
        return ans;
    }
};


