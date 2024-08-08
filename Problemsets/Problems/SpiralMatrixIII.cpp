#include <vector>

class Solution {
public:
    std::vector<std::vector<int>> spiralMatrixIII(int rows, int cols, int rStart, int cStart) {
        std::vector<std::vector<int>> res;
        int r = rStart, c = cStart;
        res.push_back({r, c});
        int step = 1;
        while (res.size() < rows*cols) {
            for (int i = 0; i < step; ++i) {
                ++c;
                if (r >= 0 && r < rows && c >= 0 && c < cols) {
                    res.push_back({r, c});
                }
            }
            for (int i = 0; i < step; ++i) {
                ++r;
                if (r >= 0 && r < rows && c >= 0 && c < cols) {
                    res.push_back({r, c});
                }
            }
            ++step;
            for (int i = 0; i < step; ++i) {
                --c;
                if (r >= 0 && r < rows && c >= 0 && c < cols) {
                    res.push_back({r, c});
                }
            }
            for (int i = 0; i < step; ++i) {
                --r;
                if (r >= 0 && r < rows && c >= 0 && c < cols) {
                    res.push_back({r, c});
                }
            }
            ++step;
        }
        return res;
    }
};
