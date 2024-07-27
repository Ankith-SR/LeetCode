class Solution {
public:
    string minWindow(string s, string t) {

        if (s.length() < t.length()) return "";

        vector<int> map(128, 0);
        int count = t.size();
        int start = 0;
        int minstart = 0;
        int minlen = INT_MAX;

        for(char c : t){
            map[c]++;
        }

        for(int end = 0; end < s.size(); end++){
            if(map[s[end]]-- > 0){
                count--;
            }
            while(count == 0){
                 if(end - start + 1 < minlen){
                    minstart = start;
                    minlen = end - start + 1;
                }
                if(map[s[start++]]++ == 0){
                    count++;
                }
            }
        }
        return minlen == INT_MAX ? "" : s.substr(minstart,minlen);
    }
};