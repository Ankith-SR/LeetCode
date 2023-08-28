class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> pda;

        for (int i = 0; i < asteroids.size(); i++) {
            if (pda.empty() || asteroids[i] > 0) {
                pda.push(asteroids[i]);
            } else {
                while (!pda.empty() && pda.top() > 0 && pda.top() < abs(asteroids[i])) {
                    pda.pop();
                }
                if (pda.empty() || pda.top() < 0) {
                    pda.push(asteroids[i]);
                } else if (pda.top() == abs(asteroids[i])) {
                    pda.pop(); 
                }
            }
        }

        vector<int> ans(pda.size());
        for (int i = pda.size() - 1; i >= 0; i--) {
            ans[i] = pda.top();
            pda.pop();
        }

        return ans;
    }
};
