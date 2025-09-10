class Solution {
public:
    int minimumTeachings(int n, vector<vector<int>>& languages, vector<vector<int>>& friendships) {
        unordered_set<int> s;

        for(auto& friendship : friendships){
            int u = friendship[0]-1;
            int v = friendship[1]-1;
            bool com = false;
            for(int lang1 : languages[u]){
                for(int lang2 : languages[v]){
                    if(lang1 == lang2){
                        com = true;
                        break;
                    }
                }
                if(com) break;
            }
            if(!com){
            s.insert(u);
            s.insert(v);
            }
        }
        
        int result = languages.size()+1;

        for(int language = 1; language <= n; language++){
            int count = 0;
            for(int user : s){
                bool know = false;
                for(int lang : languages[user]){
                    if(lang == language){
                        know = true;
                        break;
                    }
                }
                if(!know) count++;
            }
            result = min(result, count);
        }
        return result;
    }
};