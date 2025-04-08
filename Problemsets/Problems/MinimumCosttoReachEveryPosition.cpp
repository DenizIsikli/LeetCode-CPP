#include <vector>

using namespace std;

class Solution {
public:
    vector<int> minCosts(vector<int>& cost) {
        for (int i = 0; i < cost.size()-1; i++) {
            if (cost[i] <= cost[i+1]) cost[i+1] = cost[i];
        }
        return cost;
    }
};
