class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.size() != word2.size()){
            return false;
        }
        vector<int> free1(26, 0);
        vector<int> free2(26, 0);

        for(char ch : word1){
            free1[ch -'a']++;
        }
        for(char ch : word2){
            free2[ch - 'a']++;
        }

        for(int i = 0; i < 26; i++){
            if((free1[i] != 0 && free2[i] == 0) || (free2[i] != 0 && free1[i] == 0)){
                return false;
            }
        }
        sort(free1.begin(),free1.end());
        sort(free2.begin(),free2.end());

        return free1 == free2;
    }
};