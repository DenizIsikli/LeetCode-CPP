#include <vector>
#include <cmath>

class Solution {
public:
    bool canMakeSquare(std::vector<std::vector<char>>& grid) {
        for (int i = 0; i < 2; ++i) {
            for (int j = 0; j < 2; ++j) {
                int whiteCount = 0, blackCount = 0;
                for (int x = i; x < i + 2; ++x) {
                    for (int y = j; y < j + 2; ++y) {
                        if (grid[x][y] == 'W') whiteCount++;
                        else blackCount++;
                    }
                }
                if (whiteCount <= 1 || blackCount <= 1) {
                    return true;
                }
            }
        }
        return false;
    }
};
