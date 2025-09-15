class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        vector<string> s;
        istringstream iss(text);
        string word;

        while(iss >> word){
            s.push_back(word);
        }

        int count = s.size();

        for(int i = 0; i < s.size(); i++){
            for(int j = 0; j < s[i].size(); j++){
                char let = s[i][j];
                for(int k = 0; k < brokenLetters.size(); k++){
                    if(let == brokenLetters[k]){
                        count--;
                        j = s[i].size();
                        break;
                    }
                }
            }
        }
        return count;
    }
};