class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m;
        vector<int> result;

        for(int i = 0; i < nums.size(); i++){
            int otherhalf = target - nums[i];
            if(m.find(otherhalf) != m.end()){
                result.push_back(m[otherhalf]);
                result.push_back(i);
            }
            else{
                m.insert({nums[i],i});
            }
        }
        return result;
    }
};