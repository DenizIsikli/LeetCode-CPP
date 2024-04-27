#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
#include <string>
#include <queue>
#include <stack>
#include <cmath>
#include <unordered_map>
#include <unordered_set>

class Solution {
public:
    long long numberOfRightTriangles(std::vector<std::vector<int>>& grid) {
        long long count = 0;
        int rows = grid.size();
        int cols = grid[0].size();

        std::vector<int> rowSum(rows, 0);
        std::vector<int> colSum(cols, 0);

        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                rowSum[i] += grid[i][j];
                colSum[j] += grid[i][j];
            }
        }

        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                if (grid[i][j] == 1) {
                    count += (rowSum[i] - 1) * (colSum[j] - 1);
                }
            }
        }
        return count;
    }
};
