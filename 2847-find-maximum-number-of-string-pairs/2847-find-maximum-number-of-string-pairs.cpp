class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        unordered_map<string, int> countMap;
        int pairCount = 0;
        
        for (const string& word : words) {
            string reversed = word;
            reverse(reversed.begin(), reversed.end());
            if (countMap.count(reversed) > 0 && countMap[reversed] > 0) {
                pairCount++;
                countMap[reversed]--;
            } else {
                countMap[word]++;
            }
        }
        
        return pairCount;
    }
};
