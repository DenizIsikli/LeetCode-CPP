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
                if (grid[i][j] == 0) {
                    count++;
                }
            }
            if (count > grid.size()/2) {
                for (int i = 0; i < grid.size(); ++i) {
                    grid[i][j] = 1-grid[i][j];
                }
            }
        }

        std::vector<std::vector<int>> binaries;
        std::vector<int> path;
        for (int i = 0; i < grid.size(); ++i) {
            for (int j = 0; j < grid[0].size(); ++j) {
                path.push_back(grid[i][j]);
            }
            binaries.push_back(path);
            path.clear();
        }

        auto binaryToDecimal = [](std::vector<int> binary) {
            int decimal = 0;
            for (int i = 0; i < binary.size(); ++i) {
                decimal += binary[i] * std::pow(2, binary.size()-1-i);
            }
            return decimal;
        };

        int sum = 0;
        for (int i = 0; i < binaries.size(); ++i) {
            sum += binaryToDecimal(binaries[i]);
        }
        return sum;
    }
};
