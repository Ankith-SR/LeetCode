class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string, int> mp;
        vector<string> ans;
        string s = "";

        for (auto c : s1) {
            if (c == ' ') {
                if (!s.empty()) {
                    mp[s]++;
                    s.clear();
                }
            } 
            else {
                s += c;
            }
        }
        if (!s.empty()) {
            mp[s]++;
        }

        s = "";
        for (auto c : s2) {
            if (c == ' ') {
                if (!s.empty()) {
                    mp[s]++;
                    s.clear();
                }
            } 
            else {
                s += c;
            }
        }
        if (!s.empty()) {
            mp[s]++;
        }

        for (const auto& pair : mp) {
            if (pair.second == 1) {
                ans.push_back(pair.first);
            }
        }

        return ans;
    }
};
