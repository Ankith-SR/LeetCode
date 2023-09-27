class Solution {
public:
    string decodeAtIndex(string s, int k) {
        long long size = 0;
        for (char c : s) {
            if (isalpha(c)) {
                size++;
            } else {
                int repeat = c - '0';
                size *= repeat;
            }
        }
        for (int i = s.size() - 1; i >= 0; i--) {
            char currentChar = s[i];
            
            if (isdigit(currentChar)) {
                int repeat = currentChar - '0';
                size /= repeat; 
                k %= size;     
            } else {
                if (k == 0 || k == size) {
                    return string(1, currentChar); 
                }
                size--; 
            }
        }
        
        return ""; 
    }
};


