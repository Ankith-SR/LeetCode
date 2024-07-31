class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
       unordered_map<string, int> one;
       int ans = 0;
       
       for(auto i : words1){
        one[i]++;
       }

       for(auto j : words2){
        if(one[j] < 2){
            one[j]--;
        }
       }

       for(auto x : one){
        if(x.second == 0){
            ans++;
        }
       }
       return ans;
    }
};