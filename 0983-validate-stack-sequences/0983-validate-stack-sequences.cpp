class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        int ind = 0;
        stack<int> pda;
        
        for (int i = 0; i < pushed.size(); i++) {
            pda.push(pushed[i]);
            while (!pda.empty() && pda.top() == popped[ind]) {
                pda.pop();
                ind++;
            }
        }
        return pda.empty();
    }
};
