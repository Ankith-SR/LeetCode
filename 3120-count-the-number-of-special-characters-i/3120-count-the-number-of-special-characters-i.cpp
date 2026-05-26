class Solution {
public:
    int numberOfSpecialChars(string word) {
        int lower = 0;
        int upper = 0;

        for(int ch : word){
            if(islower(ch)){
                lower |= (1 << (ch - 'a'));
            }
            else{
                upper |= (1 << (ch - 'A'));
            }
        }

        int common = upper & lower;
        return __builtin_popcount(common);
    }
};