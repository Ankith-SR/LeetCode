class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        int i;
        vector<int> arr;
        arr.push_back(pref[0]);
        for(i=1 ; i<pref.size() ; i++)
        {
            arr.push_back(pref[i-1]^pref[i]);
        }
        return arr;
    }
};