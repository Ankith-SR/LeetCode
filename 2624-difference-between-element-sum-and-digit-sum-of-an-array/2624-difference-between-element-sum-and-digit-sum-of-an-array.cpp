class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int elementsum=0,digitsum=0;
        for(auto i:nums){
            elementsum+=i;
            while(i){
                digitsum+=i%10;
                i/=10;
            }
        }
        return abs(elementsum-digitsum);
    }
};