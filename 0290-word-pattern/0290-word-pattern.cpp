class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char,string> mp1;
        unordered_map<string,char> mp2;
        vector<string> words;
        string temp;

        for (char ch : s) {
            if (ch == ' ') {
                if (!temp.empty()) {
                    words.push_back(temp);
                    temp.clear();
                }
            } else {
                temp += ch;
            }
        }

        if (!temp.empty()) {
            words.push_back(temp);
        }

        if (pattern.size() != words.size()) return false;
        
        for(int i=0;i<pattern.size();i++){
            char c1 = pattern[i];
            string s1 = words[i];
            if(mp1.find(c1) != mp1.end() && mp1[c1] != s1) return false;
            if(mp2.find(s1) != mp2.end() && mp2[s1] != c1) return false;
            mp1[c1] = s1;
            mp2[s1] = c1;
        }
        return true;
    }
};