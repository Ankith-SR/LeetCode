class Solution {
public:
    int distanceTraveled(int mainTank, int additionalTank) {
        int canTake = 0;
        if(mainTank%4 != 0)
            canTake = mainTank/4;
        else
            canTake = mainTank/4 - 1;
        
        if(canTake <= additionalTank)
            return (mainTank + canTake)*10;
        return (mainTank + additionalTank)*10;
        
    }
};