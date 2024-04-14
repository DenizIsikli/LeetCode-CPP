#include <vector>

class Solution {
public:
    bool stoneGame(std::vector<int>& piles) {
        int alice, bob = 0;
        int n = piles.size();

        if (n % 2 == 0) {
            return true;
        } else {
            return false;
        }
    }
};
