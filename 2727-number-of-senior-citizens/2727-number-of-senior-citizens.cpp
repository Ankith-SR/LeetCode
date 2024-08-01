class Solution {
public:
    int countSeniors(vector<string>& details) {
        int cont=0;
        for(auto it: details){
            int num=(it[11]-'0')*10+(it[12]-'0');
            if(num>60){
                cont++;
            }
        }
        return cont;
    }
};