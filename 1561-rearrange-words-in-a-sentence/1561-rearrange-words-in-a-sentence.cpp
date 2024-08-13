class Solution {
public:
    string arrangeWords(string text) {

        text[0] = tolower(text[0]);
        stringstream ss(text);
        vector<tuple<int,int,string>> words;
        string word;
        int index = 0;

        while(ss >> word){
            words.push_back({word.length(), index++, word});
        }

        sort(words.begin(), words.end());

        string ans;
        for(int i = 0;  i < words.size(); i++){
            if(i>0){
                ans += " ";
            }
            ans += get<2>(words[i]);
        }

        ans[0] = toupper(ans[0]);
        return ans;
    }
};