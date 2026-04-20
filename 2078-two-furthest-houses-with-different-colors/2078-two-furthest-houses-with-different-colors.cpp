class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int ma = 0;
        int n = colors.size();

        for(int i = n - 1; i >= 0; i--){
            if(colors[i] != colors[0]){
                ma = i;
                break;
            }
        }

        for(int i = 0; i < n; i++){
            if(colors[i] != colors[n - 1]){
                ma = max(n - 1 - i, ma);
                break;
            }
        }

        return ma;
    }
};