class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0;
        int right = s.size()-1;
        transform(s.begin(),s.end(),s.begin(),::tolower);
        while(left<=right){
            if(!isalnum(s[left])){
                left++;
            }
            else if(!isalnum(s[right])){
                right--;
            }
            else if(s[left] != s[right]){
                return 0;
            }
            else{
                left++;
                right--;
            }
        }
        return 1;
    }
};