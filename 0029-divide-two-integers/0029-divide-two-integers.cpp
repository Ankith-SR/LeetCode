class Solution {
public:
    int divide(int dividend, int divisor) {
        if (dividend == INT_MIN && divisor == -1) 
            return INT_MAX;
        unsigned int a = abs(dividend);
        unsigned int b = abs(divisor);
        unsigned int res = 0;
        
        for (int x = 31; x >= 0; x--) {
            if ((a >> x) >= b) {
                a = a - (b << x);
                res = res + (1 << x);
            }
        }
        return (dividend > 0) == (divisor > 0) ? res : -res;
    }
};