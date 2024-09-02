class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {

        long long totalChalk = accumulate(chalk.begin(), chalk.end(), 0LL);
        k %= totalChalk;

        for(int i = 0; i < chalk.size(); i++){
            if(chalk[i] > k){
                return i;
            }
            k -= chalk[i];
        }
        
        return -1; 
    }
};