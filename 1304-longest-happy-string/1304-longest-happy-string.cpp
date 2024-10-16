class Solution {
public:
    string longestDiverseString(int a, int b, int c) {
        int curra = 0;
        int currb = 0;
        int currc = 0;
        int totalit = a + b + c;
        string ans = "";

        for(int i = 0; i < totalit; i++){
            if((a >= b && a >= c && curra != 2) || a > 0 && (currb == 2 || currc == 2)){
                ans += 'a';
                a--;
                curra++;
                currb = 0;
                currc = 0;
            }
            else if((b >= a && b >= c && currb != 2) || b > 0 && (curra == 2 || currc == 2)){
                ans += 'b';
                b--;
                currb++;
                curra = 0;
                currc = 0;
            }
            else if((c >= b && c >= a && currc != 2) || c > 0 && (currb == 2 || curra == 2)){
                ans += 'c';
                c--;
                currc++;
                currb = 0;
                curra = 0;
            }
        }
        return ans;
    }
};