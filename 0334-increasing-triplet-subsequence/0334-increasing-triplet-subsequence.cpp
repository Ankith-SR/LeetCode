class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        if (nums.size() < 3) return false; // Early exit if there are fewer than 3 elements
        
        int first = INT_MAX;
        int second = INT_MAX;

        for (int n : nums) {
            if (n <= first) {
                first = n; // smallest so far
            } else if (n <= second) {
                second = n; // second smallest
            } else {
                // we found a number greater than both first and second
                return true;
            }
        }
        return false;
    }
};
