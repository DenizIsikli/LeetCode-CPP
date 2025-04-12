#include <algorithm>

class Solution {
public:
    int bothColors(int c1, int c2) {
        int res = 0;
        int i = 1;
        while (true) {
            if (c1-i >= 0) {
                c1-=i;
                ++res;
            } else break;
            ++i;
            if (c2-i >= 0) {
                c2-=i;
                ++res;
            } else break;
            ++i;
        }
        return res;
    }

    int maxHeightOfTriangle(int red, int blue) {
        int redBlue = bothColors(red, blue);
        int blueRed = bothColors(blue, red);
        return std::max(redBlue, blueRed);
    }
};
