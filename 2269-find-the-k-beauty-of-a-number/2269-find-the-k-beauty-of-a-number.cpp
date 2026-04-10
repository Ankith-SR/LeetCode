class Solution {
public:
    int divisorSubstrings(int num, int k) {
        string s = to_string(num);
        int ans = 0;

        for (int i = 0; i <= s.size() - k; i++) {
            string sub = s.substr(i, k);
            int val = stoi(sub);

            if (val != 0 && num % val == 0) {
                ans++;
            }
        }

        return ans;
    }
};