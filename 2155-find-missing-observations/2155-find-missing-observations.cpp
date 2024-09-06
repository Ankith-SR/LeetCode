class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        
        vector<int> ans;
        int size = rolls.size();
        int sum = accumulate(rolls.begin(), rolls.end(), 0);
        int x = (mean * (size + n)) - sum;

        if(x < n || x > n * 6){
            return ans;
        }

        int base = x/n;
        int rem = x%n;

        for(int i = 0; i < n; i++){
            if(i < rem){
                ans.push_back(base+1);
            }
            else{
                ans.push_back(base);
            }
        }

        return ans;
    }
};