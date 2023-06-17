class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n;
        n = nums.size();
        int vote = 0;
        int candidate = -1;
        for(int i = 0; i < n; i++){
            if(vote == 0){
                candidate = nums[i];
                vote = 1;
            }
            else if(nums[i] == candidate){
                vote++;
            }
            else{
                vote--;
            }
        }
        int count = 0;
        for(int i = 0; i < n; i++){
            if(nums[i] == candidate){
                count++;
            }
        }
        if(count>n/2){
            return candidate;
        }
        return -1;
    }
};