class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int n = colors.size();
        char prevcolor = 'A';
        int prevtime = 0;
        int currcost, prevcost;
        currcost = prevcost = 0;

        for(int i = 1; i <= n; i++){
            if(colors[i - 1] == prevcolor){
                currcost = prevcost + min(neededTime[i - 1], prevtime);
                prevtime = max(neededTime[i - 1], prevtime);
            }
            else{
                currcost = prevcost;
                prevcolor = colors[i - 1];
                prevtime = neededTime[i - 1];
            }
            prevcost = currcost;
        }
        return prevcost;
    }
};