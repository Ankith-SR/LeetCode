class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int drank = 0;
        while (numBottles >= numExchange)
        {
            int drinkable = numBottles / numExchange;
            drinkable *= numExchange;
            numBottles -= drinkable;
            drank += drinkable;
            numBottles += drinkable / numExchange;
        }
        drank += numBottles;
        return drank;
    }
};