class Solution {
public:
    int getLucky(string s, int k) {
        string temp = "";
        int num;
        for(auto ch : s){
            num = ch - 'a' + 1;
            temp += to_string(num);
        }
        int sum;
        while(k--){
            sum = 0;
            for(auto ch : temp){
                sum += ch - '0';
            }
            temp = to_string(sum);
        }
        return stoi(temp);
    }
};