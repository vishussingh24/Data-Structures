class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int empty=numBottles;
        int drink = numBottles;

        while(empty>=numExchange){
            empty=empty-numExchange;
            drink+=1;
            empty+=1;
            numExchange++;
        }
        return drink;
    }
};