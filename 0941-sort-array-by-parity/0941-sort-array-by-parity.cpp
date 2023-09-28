class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        partition(nums.begin(),nums.end(), [](int x){
            return x % 2 == 0;
        });
        return nums;
    }
};