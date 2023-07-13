class Solution {
public:
    int minPartitions(string n) {
        vector<int> ans;
        for(int i = 0; i < n.size(); i++){
            ans.push_back(n[i] - '0');
        }
        return *max_element(ans.begin(), ans.end());
    }
};
