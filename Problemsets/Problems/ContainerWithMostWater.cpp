#include <vector>

class Solution {
public:
    int maxArea(std::vector<int>& height) {
        int maxArea = 0;
        int l = 0, r = height.size()-1;
        while (l < r) {
            maxArea = std::max(maxArea, std::min(height[l], height[r]) * (r-l));
            if (height[l] < height[r]) {
                l++;
            } else {
                r--;
            }
        }
        return maxArea;
    }
};
