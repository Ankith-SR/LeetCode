class Solution {
public:
    int smallestDistancePair(vector<int>& nums, int k) {
        int n = nums.size();
        int maxy = *max_element(nums.begin(), nums.end());
        vector<int> dist(maxy+1, 0);
        int distance;
        for(int i = 0; i < n; i++){
            for(int j = i+1; j < n; j++){
                distance = abs(nums[j]-nums[i]);
                dist[distance]++;
            }
        }
        for(int i = 0; i <= maxy; i++){
            k -= dist[i];
            if(k <= 0){
                return i;
            }
        }
        return -1;
    }
};