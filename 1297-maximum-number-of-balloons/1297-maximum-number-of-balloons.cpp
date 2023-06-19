class Solution {
public:
    int maxNumberOfBalloons(string text) {
        map<char, int> count;
        map<char, int> balloon;
        for(char c: text)
            count[c]++;
        for(char c: std::string("balloon"))
            balloon[c]++;
        
        int res = text.length();
        for(const auto &[key, value]: balloon)
            res = min(res, count[key] / value);
        return res;
    }
};
