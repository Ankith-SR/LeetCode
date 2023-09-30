class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        int n = nums.size();
        if (n < 3) {
            return false;
        }
        
        vector<int> minLeft(n);
        minLeft[0] = nums[0];
        
        for (int i = 1; i < n; i++) {
            minLeft[i] = min(minLeft[i - 1], nums[i]);
        }
        
        stack<int> st;
        
        for (int j = n - 1; j >= 0; j--) {
            if (nums[j] > minLeft[j]) {
                while (!st.empty() && st.top() <= minLeft[j]) {
                    st.pop();
                }
                if (!st.empty() && st.top() < nums[j]) {
                    return true;
                }
                st.push(nums[j]);
            }
        }
        
        return false;
    }
};
