class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int empty=numBottles;
        int drink=numBottles;
        
        while( empty>=numExchange)
        {
            int bottle = empty/numExchange;
            drink+=bottle;
            empty=empty%numExchange+bottle;
        }
        return drink;

        
    }
};