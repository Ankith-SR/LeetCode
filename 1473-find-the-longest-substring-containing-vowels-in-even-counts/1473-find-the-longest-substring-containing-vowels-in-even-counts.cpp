class Solution {
public:
    int findTheLongestSubstring(string s) {
        int character[26] = {0};
        character['a' - 'a'] = 1;
        character['e' - 'a'] = 2;
        character['i' - 'a'] = 4;
        character['o' - 'a'] = 8;
        character['u' - 'a'] = 16;

        vector<int> temp(32,-1);
        int pre = 0;
        int longs = 0;
        for(int i = 0; i < s.size(); i++){
            pre ^= character[s[i] - 'a'];
            if(temp[pre] == -1 && pre != 0){
                temp[pre] = i;
            }
            longs = max(longs, i - temp[pre]);
        }
        return longs; 
    }
};