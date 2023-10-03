class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int, int> res;
        for(auto i : nums){
            res[i]++;
        }
        int ans = 0;
        for(auto i : res){
            int temp = i.second-1;
            ans += (temp*(temp+1))/2;
        }
        return ans;
    }
};