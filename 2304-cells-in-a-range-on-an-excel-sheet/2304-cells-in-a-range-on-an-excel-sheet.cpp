class Solution {
public:
    vector<string> cellsInRange(string s) {
        vector <string> result;
        for (char i = s[0]; i <= s[3]; ++i) {
            for (char j = s[1]; j <= s[4]; ++j) {
                string str (1,i);
                str += j;
                result.push_back (str);
            }
        }
        return result;
    }
};