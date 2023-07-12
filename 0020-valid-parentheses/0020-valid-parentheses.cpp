class Solution {
public:
    bool isValid(string s) {
        stack<char> pda;
        for(int i = 0; i<s.length(); i++){
            char ans = s[i];
            if(ans == '(' || ans == '{' || ans == '['){
                pda.push(ans);
            }
            else{
                if(!pda.empty()){
                    char top = pda.top();
                    if(ans == ')' && top == '(' || ans == '}' && top == '{' || ans == ']' && top == '['){
                        pda.pop();
                    }
                    else{
                        return false;
                    }
                }
                else{
                    return false;
                }
            }
        }
        if(pda.empty()){
            return true;
        }
        return false;
    }
};