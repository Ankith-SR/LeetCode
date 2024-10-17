class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        long long int ans = 0;
        int maxel;
        priority_queue<int> pq;
        for(auto& i : nums){
            pq.push(i);
        }

        while(k--){
            maxel = pq.top();
            ans += maxel;
            pq.pop();
            pq.push(ceil(maxel/3.0));
        }
        return ans;
    }
};