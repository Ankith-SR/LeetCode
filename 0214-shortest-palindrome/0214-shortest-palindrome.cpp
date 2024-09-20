class Solution {
public:
    string shortestPalindrome(string s) {
        int length = s.length();
        if(length == 0){
            return s;
        }
        int left = 0;
        for(int right = length-1; right >= 0; right--){
            if(s[left] == s[right]){
                left++;
            }
        }
        if(left == length){
            return s;
        }
        string non = s.substr(left);
        string reverse = string(non.rbegin(), non.rend());

        return reverse + shortestPalindrome(s.substr(0,left)) + non;
    }
};