class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        vector<pair<int, int>> teams;
        sort(skill.begin(), skill.end());
        int l = 0;
        int r = skill.size()-1;

        while(l < r){
            teams.push_back(make_pair(skill[l],skill[r]));
            l++;
            r--;
        }

        long long chemistry = 0;
        int temp = teams[0].first + teams[0].second;

        for(auto it : teams){
            if(temp != it.first + it.second){
                return -1;
            }
            chemistry += it.first * it.second;
        }
        return chemistry;
    }
};