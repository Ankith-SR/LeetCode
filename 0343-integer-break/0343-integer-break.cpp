class Solution {
public:
    int integerBreak(int n) {
        if(n == 2){
            return 1;
        }
        if(n == 3){
            return 2;
        }
        int count = n/3;
        int reminder = n%3;
        if(reminder == 0){
            return pow(3, count);
        }
        else if(reminder == 1){
            return pow(3, count-1) * 4;
        }
        else{
            return pow(3, count) * 2;
        }
    }
};