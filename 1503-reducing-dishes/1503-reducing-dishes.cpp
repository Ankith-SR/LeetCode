class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {

        sort(satisfaction.begin(),satisfaction.end());

        int sum = 0;
        int ans = 0;

        for(int i = satisfaction.size()-1; i>=0; i--){
            if(sum+satisfaction[i] > 0){
                sum += satisfaction[i];
                ans += sum;
            }
            else{
                break;
            }
        }
        return ans;
    }
};