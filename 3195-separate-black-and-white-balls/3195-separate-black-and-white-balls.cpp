class Solution {
public:
    long long minimumSteps(string s) {
        long long count = 0;
        int bbc = 0;
        for(auto c : s){
            if(c == '0'){
                count += (long long) bbc;
            }
            else{
                bbc++;
            }
        }
        return count;
    }
};