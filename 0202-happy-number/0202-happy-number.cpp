class Solution {
public:
    int get(int n){
        int output = 0;
        int digit;
        while(n > 0){
            digit = n % 10;
            output += digit * digit;
            n = n/10;
        }
        return output;
    }
    bool isHappy(int n) {
        int slow = get(n);
        int fast = get(get(n));

        while(slow != fast){
            if(fast == 1){
                return true;
            }
            slow = get(slow);
            fast = get(get(fast));
        }
        return slow == 1;
    }
};