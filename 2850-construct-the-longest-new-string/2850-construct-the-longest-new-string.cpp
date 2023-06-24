class Solution {
public:
    int longestString(int x, int y, int z) {
        if(x == y){
            return (min(x,y) + (min(x,y)-1) + z)*2 + 2;
        }
        return (min(x,y) + min(x,y)+1 + z)*2;
    }
};