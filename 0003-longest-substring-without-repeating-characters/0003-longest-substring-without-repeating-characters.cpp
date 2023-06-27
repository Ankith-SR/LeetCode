class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> store;
        int ans = 0;
        int hmm = 0;
        for(int i = 0; i<s.size(); i++){
            if(store.count(s[i])==0){
                ans+=1;
            }
            else{
                int check = i+1-store[s[i]];
                if(check <= ans){
                    ans = check;
                }
                else{
                    ans+=1;
                }
            }
            store[s[i]] = i+1;
            if(ans > hmm){
                hmm = ans;
            }
        }
        return hmm;
    }
};