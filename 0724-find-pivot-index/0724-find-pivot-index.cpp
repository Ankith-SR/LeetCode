class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        //vector<int> one;
        //int res;
        //for(int i = 0; i<nums.size(); i++){
            //if(i == 0){
                //res = nums[i];
                //one.push_back(res);
            //}
            //else{
                //res = nums[i] + nums[i-1];
                //one.push_back(res);
            //}
        //}
        //vector<int> two;
        //int nice;
        //for(int i = nums.size()-1; i>=0; i--){
            //if(i = nums.size()-1){
                //nice = nums[i];
                //two.push_back(nice);

            //}
            //else{
                //nice = nums[i] + nums[i+1];
                //two.push_back(nice);
            //}
        //}
        //for(int i = 0; i<one.size(); i++){
            //if(one[i] == two[i]){
                //return i;
            //}
        //}
        //return -1;

        int sum;
        for(int i: nums){
            sum += i;
        }

        int leftsum = 0;
        int rightsum;
        for(int i = 0; i<nums.size(); i++){
            rightsum = sum - nums[i] - leftsum;
            if(rightsum == leftsum){
                return i;
            }
            leftsum += nums[i];
        }
        return -1;
    }
};