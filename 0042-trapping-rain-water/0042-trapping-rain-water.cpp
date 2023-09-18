class Solution {
public:
    int trap(vector<int>& height) {
        int left = 0;
        int right = height.size()-1;
        int ans = 0;
        int maxl = 0;
        int maxr = 0;
        while(left<=right){
            if(height[left] <= height[right]){
                if(height[left] >= maxl){
                    maxl = height[left];
                }
                else{
                    ans += maxl - height[left];
                }
                left++;
            }
            else{
                if(height[right] >= maxr){
                    maxr = height[right];
                }
                else{
                    ans += maxr - height[right];
                }
                right--;
            }
        }
        return ans;
    }
};
