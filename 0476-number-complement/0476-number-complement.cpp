class Solution {
public:
    int findComplement(int num) {
        int temp = num;
        int count = 0;
        long po = 2;
        while(temp != 0){
            temp = temp >> 1;
            count++;
        }
        unsigned int mask = (1U << count) - 1;
        return num ^ mask; 
    }
};