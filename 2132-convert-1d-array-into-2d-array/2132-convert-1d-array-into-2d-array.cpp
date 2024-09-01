class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        vector<vector<int>> ans; 
        if (m * n != original.size()) {
            return ans; 
        }
        ans.resize(m, vector<int>(n));
        for (int i = 0; i < original.size(); ++i) {
            ans[i / n][i % n] = original[i];
        }
        return ans;
    }
};
