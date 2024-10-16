class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char> st;
        for(auto c : s){
            if(!st.empty() && c == ')' && st.top() == '('){
                st.pop();
            }
            else{
                st.push(c);
            }
        }
        return st.size();
    }
};