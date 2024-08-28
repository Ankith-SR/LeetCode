class Solution {
public:
    string reversePrefix(string word, char ch) {
        string ans = "";
        int i = 0;
        for(char c : word){
            ans = c + ans;
            i++;
            if(c == ch){
                break;
            }
        }
        if(i == word.size() && word[i-1] != ch){
            return word;
        }
        for(int j = i; j < word.size(); j++){
            ans += word[j];
        }
        return ans;
    }
};
