class Solution {
public:
    string reverseWords(string s) {
        stack<string> pda;
        int start = 0; 
        int end  = s.size();
        string temp = "";
        while(start<end){
            if(s[start] == ' '){
                if(temp.size()>0){
                    pda.push(temp);
                    temp = "";
                }
            }
            else{
                temp += s[start];
            }
            start++;
        }

        if(temp.size() > 0){
            pda.push(temp);
        }
        string ans = "";
        while(!pda.empty()){
            ans += pda.top();
            ans += " ";
            pda.pop();
        }
        ans.pop_back();
        return ans;
    }
};