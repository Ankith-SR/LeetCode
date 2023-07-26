class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        vector<vector<int>> re;
        vector<pair<int,int>> tem;
        for(int i=0; i<score.size(); i++){
            tem.push_back(make_pair(score[i][k],i));
        }   
        sort(tem.begin(),tem.end());
        vector<int> t;
        for(auto x:tem){
            for(int i=0; i<score[0].size(); i++){
                t.push_back(score[x.second][i]);
            }
            re.push_back(t);
            t.clear();
        }
        reverse(re.begin(),re.end());
        return re;
    }
};