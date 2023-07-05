class Solution {
public:
    string truncateSentence(string s, int k) {
        int space = 0;
        int i;
        for(i = 0; i<s.size(); i++){
            if(s[i] == ' '){
                space++;
            }
            if(space == k){
                break;
            }
        }
        s = s.substr(0,i);
        return s;
    }
};