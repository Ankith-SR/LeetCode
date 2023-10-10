class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<char> jewelSet(jewels.begin(),jewels.end());
        int ans = 0;
        for (char stone : stones) {
            if (jewelSet.count(stone) > 0) {
                ans++;
            }
        }
        return ans;
    }
};