#include <math.h>
#include <vector>

class Solution {
public:
    std::vector<int> constructRectangle(int area) {
        int width = static_cast<int>(std::sqrt(area));
        while (area%width!=0) width--;
        int length = area/width;
        return {length, width};
    }
};
