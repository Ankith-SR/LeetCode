class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        stack<int> pda;
        vector<string> ans;

        int ind = 0;
        for (int i = 1; i <= n && ind < target.size(); i++) {
            pda.push(i);
            ans.push_back("Push");
            
            if (i != target[ind]) {
                pda.pop();
                ans.push_back("Pop");
            } else {
                ind++;
            }
        }
        
        return ans;
    }
};

