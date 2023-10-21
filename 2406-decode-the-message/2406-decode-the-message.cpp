class Solution {
public:
    string decodeMessage(string key, string message) {
        char start='a';
        char mapping[200]={0};
        for(auto ch:key){
            if(ch!=' ' and mapping[ch]==0){
                mapping[ch]=start;
                start++;
            }
        }
        string s;
        for(auto ch:message){
            if(ch==' '){
                s.push_back(ch);
            }
            else{
                s.push_back(mapping[ch]);
            }
        }
        return s;
    }
};