class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> pda;
        for(int i = 0; i < operations.size(); i++){
            if(operations[i]=="C"){
                pda.pop();
            }
            else if(operations[i] == "D"){
                pda.push(2*pda.top());
            }
            else if(operations[i] == "+"){
                int first = pda.top();
                pda.pop();
                int second = pda.top();
                pda.push(first);
                pda.push(first + second);
            }
            else{
                pda.push(stoi(operations[i]));
            }
        }
        int ans = 0;
        while(!pda.empty()){
            ans += pda.top();
            pda.pop();
        }
        return ans;
    }
};