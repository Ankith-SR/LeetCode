class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        
        stack<int>s;
        
        for(string &i:tokens){
            
            if(i == "+"){
                long a=s.top();
                s.pop();
                long b=s.top();
                s.pop();
                
                s.push(a+b);
            }
            else if(i == "*"){
                long a=s.top();
                s.pop();
                long b=s.top();
                s.pop();
                
                s.push(a*b);
            }
            else if(i == "-"){
                long a=s.top();
                s.pop();
                long b=s.top();
                s.pop();
                
                s.push(b-a);
            }
            else if(i == "/"){
                long a=s.top();
                s.pop();
                long b=s.top();
                s.pop();
                
                s.push(b/a);
            }
            else{
                s.push(stoi(i));
            }
        }
        return s.top();
    }
};