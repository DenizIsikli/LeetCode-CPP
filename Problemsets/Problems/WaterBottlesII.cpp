class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int cnt=numBottles;
        while(numBottles>=numExchange){
            numBottles-=numExchange-1;
            numExchange++;
            cnt++;
        }
        return cnt;
    }
};
