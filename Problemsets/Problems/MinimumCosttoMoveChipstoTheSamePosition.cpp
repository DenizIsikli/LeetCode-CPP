#include <vector>

class Solution {
public:
    int minCostToMoveChips(std::vector<int>& position) {
        int odd = 0;
        int even = 0;
        for (int i = 0; i < position.size(); i++) {
            if (position[i] % 2 == 0) {
                even++;
            } else {
                odd++;
            }
        }
        return std::min(odd, even);
    }
};
