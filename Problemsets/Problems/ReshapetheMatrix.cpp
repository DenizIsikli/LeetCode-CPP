#include <vector>

class Solution {
public:
    std::vector<std::vector<int>> matrixReshape(std::vector<std::vector<int>>& mat, int r, int c) {
        int n = mat.size(), m = mat[0].size();
        if(n*m!=r*c) return mat;

        std::vector<std::vector<int>> ans(r, std::vector<int>(c, 0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                int idx = i * m + j;
                ans[idx / c][idx % c] = mat[i][j];
            }
        }
        
        return ans;
    }
};
