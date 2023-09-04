class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string a = *max_element(strs.begin(),strs.end());
        string b = *min_element(strs.begin(),strs.end());
        string c = "";
        for(int i = 0; i<b.size(); i++){
            if(a[i] == b[i]){
                c += a[i];
            }
            else{
                break;
            }
        }
        return c;
    }
};