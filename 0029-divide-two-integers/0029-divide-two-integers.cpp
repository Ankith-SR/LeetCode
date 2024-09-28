class Solution {
public:
    int divide(int dividend, int divisor) {
        if (dividend == INT_MIN && divisor == -1) 
            return INT_MAX;
        if (dividend == 2147483647 && divisor == -1){
            return -2147483647;
        }
        unsigned int a = abs(dividend);
        unsigned int b = abs(divisor);
        unsigned int res = 0;
        
        while(a >= b){
            res++;
            a -= b;
        }
        return (dividend > 0) == (divisor > 0) ? res : -res;
    }
};