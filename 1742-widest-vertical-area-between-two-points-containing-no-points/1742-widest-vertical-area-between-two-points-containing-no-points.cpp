class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        vector<int> help;
        for(int i = 0; i < points.size(); i++){
            help.push_back(points[i][0]);
        }
        sort(help.begin(), help.end());
        int ans = 0;
        for(int i = 1; i < help.size(); i++){
            ans = max(ans, help[i]-help[i-1]);
        }
        return ans;
    }
};