class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
       string str = "";
        for(int i=0;i<words.size();i++){
            str.push_back(words[i][0]);
        }
   return str==s;
    }
};