class Solution {
public:
    int minElement(vector<int>& nums) {
        int ans = INT_MAX;
        for(int num : nums){
            int temp = 0;
            while(num > 0){
                temp += num%10;
                num /= 10;
            }
            ans = min(temp, ans);
        }
        return ans;
    }
};