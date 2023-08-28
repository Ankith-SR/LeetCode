class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> mp;
        unordered_set<int> s;
        for(auto i : arr){
            mp[i]++;
        }
        for(auto j : mp){
            s.insert(j.second);
        }
        return mp.size() == s.size();
    }
};