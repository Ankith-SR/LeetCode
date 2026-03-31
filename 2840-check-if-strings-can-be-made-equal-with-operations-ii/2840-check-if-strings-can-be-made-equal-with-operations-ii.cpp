class Solution {
public:
    bool checkStrings(string s1, string s2) {
        string eve1 = "";
        string odd1 = "";
        for(int i = 0; i < s1.size(); i++){
            if(i % 2 == 0){
                eve1 += s1[i];
            }
            else{
                odd1 += s1[i];
            }
        }
        string eve2 = "";
        string odd2 = "";
        for(int i = 0; i < s2.size(); i++){
            if(i % 2 == 0){
                eve2 += s2[i];
            }
            else{
                odd2 += s2[i];
            }
        }
        sort(eve1.begin(), eve1.end());
        sort(eve2.begin(), eve2.end());
        sort(odd1.begin(), odd1.end());
        sort(odd2.begin(), odd2.end());

        return eve1 == eve2 && odd1 == odd2;
    }
};