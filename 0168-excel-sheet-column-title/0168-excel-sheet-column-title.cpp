class Solution {
public:
    string convertToTitle(int columnNumber) {
        string res = "";
        while(columnNumber){
            columnNumber--;
            char ans = static_cast<char>(65 + (columnNumber%26));
            res = ans + res;
            columnNumber /= 26;
        }
        return res;
    }
};