class Solution {
public:
    void sortColors(vector<int>& nums) {
        int one = 0,two=nums.size()-1;
        for(int i=one;i<=two;i++)
        {
            if(nums[i]==0)
            {
                swap(nums[i],nums[one]);
                one++;
            }
            if(nums[i]==2)
            {
                swap(nums[i],nums[two]);
                two--;
                i--;
            }
        }
        
        
    }
};
