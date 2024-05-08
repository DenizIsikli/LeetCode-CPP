#include <vector>
#include <unordered_map>

class Solution {
public:
    void setZeroes(std::vector<std::vector<int>>& matrix) {
        std::unordered_map<int, int> zeroMap;

        for (int i = 0; i < matrix.size(); ++i) {
            for (int j = 0; j < matrix[0].size(); ++j) {
                if (matrix[i][j] == 0) {
                    zeroMap[i] = 1;
                    zeroMap[matrix.size() + j] = 1;
                }
            }
        }

        for (int i = 0; i < matrix.size(); ++i) {
            for (int j = 0; j < matrix[0].size(); ++j) {
                if (zeroMap[i] == 1 || zeroMap[matrix.size() + j] == 1) {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};
