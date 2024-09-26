class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        unordered_set<int> s;
        int ans = INT_MIN;
        int len;

        for(int c : arr1){
            while(c > 0){
                s.insert(c);
                c /= 10;
            }
        }

        for(int i : arr2){
            len = log10(i) + 1;
            while(i > 0){
                if(s.count(i) != 0){
                    break;
                }
                i /= 10;
                len--;
            }
            ans = max(len, ans);
        }
        return ans;
    }
};