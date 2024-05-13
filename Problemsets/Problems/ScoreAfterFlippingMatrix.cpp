#include <vector>
#include <cmath>

class Solution {
public:
    int matrixScore(std::vector<std::vector<int>>& grid) {
        for (int i = 0; i < grid.size(); ++i) {
            if (grid[i][0] == 0) {
                for (int j = 0; j < grid[0].size(); ++j) {
                    grid[i][j] = 1-grid[i][j];
                }
            }
        }

        for (int j = 1; j < grid[0].size(); ++j) {
            int count = 0;
            for (int i = 0; i < grid.size(); ++i) {
                if (grid[i][j] == 0) count++;
            }
            if (count > grid.size()/2) {
                for (int i = 0; i < grid.size(); ++i) {
                    grid[i][j] = 1-grid[i][j];
                }
            }
        }

        auto binaryToDecimal = [](std::vector<std::vector<int>> binary) {
            int decimal = 0;
            for (int i = 0; i < binary.size(); ++i) {
                int row = 0;
                for (int j = 0; j < binary[0].size(); ++j) {
                    row += binary[i][j] * std::pow(2, binary[0].size()-1-j);
                }
                decimal += row;
            }
            return decimal;
        };

        return binaryToDecimal(grid);
    }
};
