#include <vector>

class Solution {
public:
    std::vector<std::vector<int>> generateMatrix(int n) {
        std::vector<std::vector<int>> ans(n, std::vector<int>(n));
        int row = 0, col = 0, count = 1;

        while (n>0) {
            if (n == 1) {
                ans[row][col] = count;
                break;
            }

            for (int i = 0; i < n-1; ++i) {
                ans[row][col++] = count++;
            }

            for (int i = 0; i < n-1; ++i) {
                ans[row++][col] = count++;
            }

            for (int i = 0; i < n-1; ++i) {
                ans[row][col--] = count++;
            }

            for (int i = 0; i < n-1; ++i) {
                ans[row--][col] = count++;
            }

            row++;
            col++;
            n -= 2;
        }
        return ans;
    }
};
