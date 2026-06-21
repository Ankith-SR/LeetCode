class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        const int mxc = 100000;
        vector<int> freq(mxc + 1, 0);

        for(int cost : costs){
            freq[cost]++;
        }

        int ans = 0;

        for(int i = 0; i <= mxc; i++){
            if(freq[i] == 0) continue;
            int buy = min(freq[i], coins/i);
            ans += buy;
            coins -= buy * i;
            if(coins < i) break;
        }

        return ans;
    }
};