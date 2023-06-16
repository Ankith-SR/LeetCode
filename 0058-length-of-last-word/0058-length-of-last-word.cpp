class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        int k=1;
        for(int i = s.size()-1; i >= 0; i--){
                if(s[i] == ' '){
                    if (k==0){
                        break;
                    }
                }
                else{
                    k=0;
                    count++;
                }
                
            }
            return count;
        
        
        return count;
    }
};