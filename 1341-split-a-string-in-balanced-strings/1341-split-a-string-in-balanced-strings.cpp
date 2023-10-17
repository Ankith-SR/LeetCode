class Solution {
public:
    int balancedStringSplit(string s) {
        int balance = 0;
        int ans = 0;
        for(int i = 0; i<s.size(); i++){
            if(balance == 0){
                ans++;
            }
            if(s[i] == 'L'){
                balance++;
            }
            if(s[i] == 'R'){
                balance--;
            }
        }
        return ans;
    }
};