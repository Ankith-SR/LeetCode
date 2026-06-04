class Solution {
public:
    int totalWaviness(int num1, int num2) {
        auto getWav = [](int x) -> int{
            string s = to_string(x);
            int waviness = 0;

            for(size_t i = 1; i < s.size() - 1; ++i){
                bool isPeak = s[i] > s[i-1] && s[i] > s[i + 1];
                bool isvalley = s[i] < s[i-1] && s[i] < s[i + 1];
                if(isPeak || isvalley){
                    ++waviness;
                }
            }
            return waviness;
        };

        int ans = 0;
        for(int i = num1; i <= num2; i++){
            ans += getWav(i);
        }

        return ans;
    }
};