class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int low = INT_MAX;
        int pro = 0;
        int nice = 0;
        for(int i = 0; i<prices.size(); i++){
            if(prices[i] < low){
                low = prices[i];
            }
            pro = prices[i] - low;
            if(nice<pro){
                nice = pro;
            }
        }
        return nice;
    }
};