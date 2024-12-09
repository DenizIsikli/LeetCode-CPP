#include <string>

class Solution {
public:
    bool judgeCircle(std::string moves) {
        int x = 0, y = 0;
        for (char mv : moves) {
            switch (mv) {
                case 'U': y++; break;
                case 'D': y--; break;
                case 'L': x--; break;
                case 'R': x++; break;
            }
        }
        return x == 0 && y == 0;
    }
};
