class Solution {
    static constexpr int dirs[4][2] = {{1 , 0}, {0 , 1}, {-1 , 0}, {0 , -1}};
public:
    int maximumSafenessFactor(vector<vector<int>>& grid) {
        if(grid[0][0] || grid.back().back()){
            return 0;
        }

        int n = grid.size();
        queue<pair<int, int>> q;

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(grid[i][j]){
                    q.push({i , j});
                }
            }
        }

        while(q.size()){
            auto [i , j] = q.front();
            q.pop();

            int v = grid[i][j];

            for(auto& d : dirs){
                int x = i + d[0];
                int y = j + d[1];

                if(min(x,y) >= 0 && max(x,y) < n && !grid[x][y]){
                    grid[x][y] = v + 1;
                    q.push({x , y});
                }
            }
        }

        priority_queue<tuple<int, int, int>> pq;

        pq.push({grid[0][0], 0, 0});

        while(pq.size()){
            auto [sf, i, j] = pq.top();
            pq.pop();

            if(i == n - 1 && j == n - 1){
                return sf - 1;
            }

            for(auto& d : dirs){
                int x = i + d[0];
                int y = j + d[1];

                if(min(x,y) >= 0 && max(x,y) < n && grid[x][y] > 0){
                    pq.push({min(sf, grid[x][y]), x, y});
                    grid[x][y] *= -1;
                }
            }
        }
        return grid.back().back() - 1;

    }
};