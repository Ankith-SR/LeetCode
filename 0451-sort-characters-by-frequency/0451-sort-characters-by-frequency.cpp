class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> m;
        for(int i = 0; i<s.size(); i++){
            m[s[i]]++;
        }
        vector<pair<int, char>> v;

        for(auto &pair : m){
            v.push_back({pair.second,pair.first});
        }
        sort(v.begin(),v.end(),greater<pair<int,char>>());
        string ans;
        for(auto val : v){
            for(int i = 0; i<val.first; i++){
                ans.push_back(val.second);
            }
        }
        return ans;
    }
};