class Solution {
public:
    int findInMountainArray(int target, MountainArray &mountainArr) {
        int length = mountainArr.length();
        int low = 1;
        int high = length - 2;
        int test;
        while(low != high){
            test = (low + high)/2;
            if(mountainArr.get(test) < mountainArr.get(test+1)){
                low = test + 1;
            }
            else{
                high = test;
            }
        }
        int peak = low;
        low = 0;
        high = peak;
        while(low != high){
            test = (low + high)/2;
            if(mountainArr.get(test) < target){
                low = test + 1;
            }
            else{
                high = test;
            }
        }
        if(mountainArr.get(low) == target){
            return low;
        }
        low = peak + 1;
        high = length - 1;
        while(low != high){
            test = (low + high)/2;
            if(mountainArr.get(test) > target){
                low = test + 1;
            }
            else{
                high = test;
            }
        }
        if(mountainArr.get(low) == target){
            return low;
        }
        return -1;
    }
};