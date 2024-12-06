#include <string>

class Solution {
public:
    std::string winningPlayer(int x, int y) {
        bool turn = 0;
        while (x>=1&&y>=4) {
            x-=1;
            y-=4;
            turn = !turn;
        }
        if (turn) return "Alice";
        return "Bob";
    }
};
