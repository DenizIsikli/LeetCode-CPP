#include <vector>
#include <algorithm>

class Solution {
public:
    int maxDistance(std::vector<std::vector<int>>& arrays) {
        int distance = 0;
        int smallest = arrays[0][0];
        int biggest = arrays[0].back();

        for (int i = 1; i < arrays.size(); ++i) {
            distance = std::max(distance, std::abs(smallest-arrays[i].back()));
            distance = std::max(distance, std::abs(biggest-arrays[i][0]));
            smallest = std::min(smallest, arrays[i][0]);
            biggest = std::max(biggest, arrays[i].back());
        }
        return distance;
    }
};
