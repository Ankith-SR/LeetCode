class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> one, two;
        for(int i = 0; i < s.size(); i++){
            if(one[s[i]] && one[s[i]]!=t[i]){
                return false;
            }
            if(two[t[i]] && two[t[i]]!=s[i]){
                return false;
            }
            one[s[i]]=t[i];
            two[t[i]]=s[i];
        }
        return true;
    }
};