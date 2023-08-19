class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        stack<int> nice;
        vector<int> ans(n);
        int day;
        int prev;

        for(int i = 0; i<n; i++){
            int current = i;
            int temp = temperatures[i];

            while(!nice.empty() && temperatures[nice.top()] < temp){
                day = nice.top();
                prev = temperatures[nice.top()];
                nice.pop();

                ans[day] = current - day;
            }
            nice.push(current);
        }
        return ans;
    }
};