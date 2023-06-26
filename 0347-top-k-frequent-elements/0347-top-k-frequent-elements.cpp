class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        map<int,int> res;
        for(int i = 0; i<nums.size();i++){
            res[nums[i]]++;
        }
        vector<int> counts;
        for(auto it = res.begin(); it != res.end(); it++){
            counts.push_back(it->second);
        }
        sort(counts.begin(),counts.end(),greater<int>());
        vector<int> ans;
        int a = 0;
        while(ans.size() != k){
            for(auto it = res.begin(); it != res.end(); it++){
                if(it->second == counts[a] && a<k){
                    ans.push_back(it->first);
                    a++;
                }
            }
        }
        return ans;
    }
};