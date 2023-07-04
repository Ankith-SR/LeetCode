class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string one;
        for(int i = 0; i<word1.size(); i++){
            one  = one + word1[i];
        }
        string two;
        for(int i = 0; i<word2.size(); i++){
            two = two + word2[i];
        }
        if(one == two){
            return true;
        }
        else{
            return false;
        }
    }
};