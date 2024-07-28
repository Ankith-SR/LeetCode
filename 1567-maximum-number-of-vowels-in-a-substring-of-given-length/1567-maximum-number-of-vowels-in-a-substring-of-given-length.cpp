class Solution {
public:
    bool isvowel(char c){
        return c=='a'||c=='e'||c=='i'||c=='o'||c=='u';
    }
    
    int maxVowels(string s, int k) {
        int ans = 0;
        int count = 0;
        for(int i = 0; i < k; i++){
            if(isvowel(s[i])){
                count++;
            }
        }
        ans = count;
        int i = k;
        int j = 0;
        while(i < s.size()){
            if(isvowel(s[i])){
                count++;
            }
            if(isvowel(s[j])){
                count--;
            }
            ans = max(ans, count);
            i++;
            j++;
        }
        return ans;
    }
};
