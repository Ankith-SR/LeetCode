class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int biggest = 0;
        int second = 0;
        for(int num : nums){
            if(num > biggest){
                second = biggest;
                biggest = num;
            }
            else{
                second = max(second, num);
            }
        }
        return (biggest - 1) * (second - 1);
    }
};