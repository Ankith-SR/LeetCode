class Solution {
public:
    int numberOfPairs(vector<vector<int>>& points) {
        sort(points.begin(), points.end(), [](const auto& a, const auto& b){
            if(a[0] == b[0]) return a[1] > b[1];
            return a[0] < b[0];
        });

        int top;
        int bot;
        int y;
        int result = 0;

        for(int i = 0; i < points.size(); i++){
            top = points[i][1];
            bot = INT_MIN;
            for(int j = i + 1; j < points.size(); j++){
                y = points[j][1];
                if(bot < y && y <= top){
                    result++;
                    bot = y;
                }
                if (bot == top) break;
            }
        }
        return result;
    }
};