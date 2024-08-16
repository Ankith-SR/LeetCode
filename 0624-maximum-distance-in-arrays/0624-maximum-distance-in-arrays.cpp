class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        int mi = arrays[0][0];
        int ma = arrays[0].back();
        int ans = 0;

        for(int i = 1; i < arrays.size(); i++){
            ans = max(ans, abs(mi-arrays[i].back()));
            ans = max(ans, abs(ma-arrays[i][0]));
            mi = min(mi, arrays[i][0]);
            ma = max(ma, arrays[i].back());
        }
        return ans;
    }
};