class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string, int> mp;
        for(const string& it : arr){
            mp[it]++;
        }
        int count = 0;
        for(auto it : arr){
            if(mp[it] == 1){
                count++;
                if(count == k){
                    return it;
                }
            }
        }
        return "";
    }
};