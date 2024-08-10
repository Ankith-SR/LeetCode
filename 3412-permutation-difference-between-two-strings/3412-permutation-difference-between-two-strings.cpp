class Solution {
public:
    int findPermutationDifference(string s, string t) {
        vector<int> count(26, 0);
        for(int i = 0; i < s.size(); i++){
            count[s[i]-'a'] = i;
        }
        for(int i = 0; i < t.size(); i++){
            count[t[i] - 'a'] = abs(count[t[i] - 'a'] - i);
        }
        return accumulate(count.begin(), count.end(), 0);
    }
};