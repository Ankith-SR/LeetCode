class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int, int> mp;
        for(int i = 0; i < nums.size(); i++){
            mp[nums[i]]++;
        }
        
        vector<int> result;
        
        for(auto ele : mp){
            if(ele.second > nums.size()/3){
                result.push_back(ele.first);
            }
        }
        
        return result;
    }
};

