class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        sort(asteroids.begin(), asteroids.end());
        
        long long temp = mass;
        for(const int as : asteroids){
            if(temp < as){
                return false;
            }
            temp += as;
        }
        return true;
    }
};