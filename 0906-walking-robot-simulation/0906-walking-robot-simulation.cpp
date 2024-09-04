class Solution {
public:
    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
        vector<vector<int>> dirs{{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
        
        set<string> obset;
        for(vector<int> x: obstacles) {
            obset.insert(to_string(x[0]) + " " + to_string(x[1]));
        }
        
        int x = 0;
        int y = 0;
        int dir = 0;
        int maxDist = 0;
        
        for(int i: commands) {
            if(i == -2) {
                dir = (dir + 3) % 4;
            } else if(i == -1) {
                dir = (dir + 1) % 4;
            } else {
                int step = 0;
                while(step < i && 
                      (!obset.count(to_string(x + dirs[dir][0]) + " " + 
                                    to_string(y + dirs[dir][1])) > 0)) {
                    x += dirs[dir][0];
                    y += dirs[dir][1];
                    step++;
                }
            }
            
            maxDist = max(maxDist, x * x + y * y);
        }
        
        return maxDist;
    }
};