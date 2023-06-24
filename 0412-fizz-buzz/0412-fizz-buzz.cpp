class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> ans;
        string nice;
        for(int i = 1; i<=n; i++){
            if(i%3==0 || i%5==0){
                nice = "";
                if(i%3==0){
                     nice = "Fizz";
                }
                if(i%5==0){
                    nice = nice+"Buzz";
                }
            }
            else{
                nice = to_string(i);
            }
            ans.push_back(nice);
        }
        return ans;
    }
};