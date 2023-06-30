class Solution {
    public int[] leftRightDifference(int[] nums) {
      int[] left = new int[nums.length];
      int[] right = new int[nums.length];
      int[] ans = new int[nums.length];
      if(nums.length == 1){
          ans[0] = 0;
      } 
      else {
        left[0] = 0;
        right[nums.length - 1] = 0;

        for(int i = 1 ; i < nums.length ; i++){
          left[i] = nums[i-1] + left[i-1]; 
        }

        for(int i = nums.length - 2; i >= 0 ; i--){
          right[i] = right[i+1] + nums[i+1];
        }

        for(int i = 0 ; i < nums.length ; i++){
          if(left[i] > right[i]){
            ans[i] = left[i] - right[i];
          }else {
            ans[i] = right[i] - left[i];
          }
        }
      }

      return ans;
    }
}