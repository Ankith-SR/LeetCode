class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        map<int, vector<int>> num;
        for(int i = 0; i < arr.size(); i++){
            num[arr[i]].push_back(i);
        }

        int rank = 1;
        for(auto& pair : num){
            for(int index : pair.second){
                arr[index] = rank;
            }
            rank++;
        }
        return arr;
    }
};