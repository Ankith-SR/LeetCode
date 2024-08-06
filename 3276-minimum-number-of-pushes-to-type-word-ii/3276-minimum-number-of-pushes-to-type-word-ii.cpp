class Solution {
public:
    int minimumPushes(string word) {
        vector<int> arr (26, 0);
        for(auto c : word){
            arr[c-'a']++;
        }
        sort(arr.rbegin(), arr.rend());
        int ans = 0;
        for(int i = 0; i < 26; i++){
            if(arr[i] == 0){
                break;
            }
            ans += (i / 8+1) * arr[i];
        }
        return ans;
    }
};