class Solution {
public:
    char findTheDifference(string s, string t) {
        vector<int> one (26, 0);
        vector<int> two (26, 0);
        for(int i = 0; i < s.size(); i++){
            one[s[i]-'a']++;
        }
        for(int i = 0; i < t.size(); i++){
            two[t[i]-'a']++;
        }
        for(int i = 0; i < 26; i++){
            if(one[i] != two[i]){
                return i +'a';
            }
        }
        return '\0';
    }
};