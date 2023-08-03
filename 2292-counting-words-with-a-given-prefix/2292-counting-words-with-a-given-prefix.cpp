class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int n = pref.size();
        int ans  = 0;
        for(auto & w : words) {
            if(w.substr(0,n) == pref){
                ans++;
            } 
        }
        return ans;
    }
};