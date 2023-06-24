class Solution {
public:
    int distanceTraveled(int mainTank, int additionalTank) {
        int temp = 0;
        int ans=0;
        int nice = mainTank;
        while(nice>0){
            nice -= 1;
            temp += 1;
            if(additionalTank>0){
                if(temp%5 == 0 && temp != 0){
                    ans += 1;
                    nice += 1;
                    additionalTank -= 1;
                }
            }
        }
        return mainTank*10 + ans*10;
    }
};