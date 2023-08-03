class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        unordered_set<int> ans;
        vector<int> res;
        for(int i = 0; i<A.size(); i++){
            ans.insert(A[i]);
            ans.insert(B[i]);
            res.push_back((i+1)*2-ans.size());
        }
        return res;
    }
};