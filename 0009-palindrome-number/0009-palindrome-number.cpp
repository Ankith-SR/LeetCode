class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        long ans = 0;
        int y = x;
        while(x){
            ans = ans*10 + x%10;
            x = x/10;
        }
        if(ans == y){
            return true;

        }
        else{
            return false;
        }
    }
};