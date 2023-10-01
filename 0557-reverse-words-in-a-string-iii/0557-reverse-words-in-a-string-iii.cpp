class Solution {
public:
    string reverseWords(string s) {
        int start = 0;
        int end = 0;
        int n = s.length();
        string ans = "";

        while (end < n) {
            while (end < n && s[end] != ' ') {
                end++;
            }
            for (int i = end - 1; i >= start; i--) {
                ans += s[i];
            }
            if (end < n) {
                ans += ' ';
            }
            end++;
            start = end;
        }

        return ans;
    }
};

