class Solution {
public:
    int bitwiseComplement(int n) {
        if(n == 0){
            return 1;
        }
        int temp = n;
        int count = 0;
        long po = 2;
        while(temp != 0){
            temp = temp >> 1;
            count++;
        }
        unsigned int mask = (1U << count) - 1;
        return n ^ mask; 
    }
};