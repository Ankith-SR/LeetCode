class MinStack {
public:
    stack<int> pda;
    stack<int> mini;
    MinStack() {
        int val;
    }
    
    void push(int val) {
        pda.push(val);
        if(mini.empty() || val<= mini.top()){
            mini.push(val);
        }
    }
    
    void pop() {
        if(pda.top() == mini.top()){
            mini.pop();
            pda.pop();
        }
        else{
            pda.pop();
        }
    }
    
    int top() {
        return pda.top();
    }
    
    int getMin() {
        if(mini.empty()){
            return -1;
        }
        return mini.top();
    }
};
