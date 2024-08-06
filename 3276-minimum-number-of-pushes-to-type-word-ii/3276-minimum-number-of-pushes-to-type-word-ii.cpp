class Solution {
public:
    int minimumPushes(string word) {
        vector<int> arr (26, 0);
        for(auto c : word){
            arr[c-'a']++;
        }
        sort(arr.begin(), arr.end());
        int ans = 0;
        for(int i = 25; i >= 0; i--){
            if(i > 17){
                ans += arr[i];
            }
            else if(i > 9){
                ans += arr[i] * 2;
            }
            else if(i > 1){
                ans += arr[i] * 3;
            }
            else{
                ans += arr[i] * 4;
            }
        }
        return ans;
    }
};