#include <vector>
#include <algorithm>

class Solution {
public:
    int heightChecker(std::vector<int>& heights) {
        std::vector<int> sorted_heights = heights;
        std::sort(sorted_heights.begin(), sorted_heights.end());
        int ans = 0;
        for (int i = 0; i < heights.size(); ++i) {
            if (heights[i]!=sorted_heights[i]) ans++;
        }
        return ans;
    }
};
