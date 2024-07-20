#include <vector>

class Solution {
public:
    std::vector<std::vector<int>> restoreMatrix(std::vector<int>& rowSum, std::vector<int>& colSum) {
        std::vector<std::vector<int>> matrix(rowSum.size(), std::vector<int>(colSum.size(), 0));
        for (int i = 0; i < rowSum.size(); i++) {
            for (int j = 0; j < colSum.size(); j++) {
                matrix[i][j] = std::min(rowSum[i], colSum[j]);
                rowSum[i] -= matrix[i][j];
                colSum[j] -= matrix[i][j];
            }
        }
        return matrix;
    }
};
