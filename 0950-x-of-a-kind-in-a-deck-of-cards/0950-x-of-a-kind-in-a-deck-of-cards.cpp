class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        unordered_map<int, int> mp;
        for(auto it : deck){
            mp[it]++;
        }
        int ans = 0;
        for(auto it : mp){
            ans = __gcd(ans, it.second);
        }
        return ans < 2 ? false : true;
    }
};