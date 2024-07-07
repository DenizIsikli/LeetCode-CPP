class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        long long ans = numBottles;
        while (true) {
            long long drank = numBottles/numExchange;
            if (drank==0) break;
            ans += drank;
            numBottles = drank + numBottles%numExchange;
        }
        return ans;
    }
};
