class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0;
        int j = 0;
        for(i = 0; i<t.size();i++){
            if(s[j] == t[i]){
                j=j+1;
            }
        }
        if(j==s.size()){
            return true;
        }
        return false;
    }
};