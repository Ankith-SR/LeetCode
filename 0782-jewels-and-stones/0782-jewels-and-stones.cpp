class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<char> jewelSet;
        for (char jewel : jewels) {
            jewelSet.insert(jewel);
        }
        
        int ans = 0;
        for (char stone : stones) {
            if (jewelSet.count(stone) > 0) {
                ans++;
            }
        }
        return ans;
    }
};