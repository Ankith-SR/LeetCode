class Solution {
public:
    int stoneGameII(vector<int>& piles) {
        int length = piles.size();
        vector<vector<int>> dp(length + 1, vector<int>(length + 1, 0));
        vector<int> suff(length + 1, 0);

        for(int i = length - 1; i >= 0; i--){
            suff[i] = suff[i + 1] + piles[i];
        }

        for(int i = 0; i <= length; i++){
            dp[i][length] = suff[i];
        }

        for(int index = length - 1; index >= 0; index--){
            for(int maxy = length - 1; maxy >= 1; maxy--){
                for(int X = 1; X <= 2 * maxy && index + X <= length; X++){
                    dp[index][maxy] = max(dp[index][maxy], suff[index] - dp[index + X][max(maxy, X)]);
                }
            }
        }
        return dp[0][1];
    }
};