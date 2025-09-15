class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        istringstream iss(text);
        string word;
        int count = 0;
        bool ok;

        while(iss >> word){
            ok = true;
            for(char c : word){
                if(brokenLetters.find(c) != string::npos){
                    ok = false;
                    break;
                }
            }
            if(ok) count++;
        }
        return count;
    }
};