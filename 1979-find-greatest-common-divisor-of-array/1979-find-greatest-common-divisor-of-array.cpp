class Solution {
public:
    int findGCD(vector<int>& nums) {
        int small = INT_MAX;
        int big = INT_MIN;

        for(auto& n : nums){
            small = min(small, n);
            big = max(big, n);
        }
        return __gcd(small, big);
    }
};