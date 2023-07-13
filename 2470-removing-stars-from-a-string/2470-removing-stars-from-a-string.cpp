class Solution {
public:
    string removeStars(string s) {
        stack<char> pda;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '*'){
                if(!pda.empty()){
                   pda.pop(); 
                }
            }
            else{
                pda.push(s[i]);
            }
        }
        string ans = "";
        while(!pda.empty()){
            ans += pda.top();
            pda.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};