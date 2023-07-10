class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<pair<string,int>> ans;
        for(int i = 0; i< names.size(); i++){
            ans.push_back({names[i], heights[i]});
        }

        sort(ans.begin(),ans.end(), [](pair<string,int> &a, pair<string, int> &b){
            return a.second > b.second;
        });

        vector<string> res;
        for(int i = 0; i<names.size(); i++){
            res.push_back(ans[i].first);
        }
        return res;
    }
};