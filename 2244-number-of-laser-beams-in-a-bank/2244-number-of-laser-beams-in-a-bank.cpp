class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int ans = 0;
        int x = 0;
        int y = 0;
        for(auto &i: bank){
            for(auto &j: i){
                if(j == '1'){
                    x++;
                }
            }
            if(x){
                ans += (x*y);
                y = x;
                x = 0;
            }
        }
        return ans;
    }
};