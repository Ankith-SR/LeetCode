class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int track;
        int count = 0;
        set<char> ans(allowed.begin(),allowed.end());

        for(auto it:words){
            track = 0;
            for(auto i:it){
                if(ans.find(i) == ans.end()){
                    track = 1;
                    break;
                }
            }
            if(track == 0){
                count++;
            }
        }
        return count;
    }
};