class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(), piles.end());
        int left = 0;
        int right = piles.size()-1;
        int you = 0;
        while(left<right){
            right--;
            left++;
            you = you + piles[right];
            right--;
        }
        return you;
    }
};