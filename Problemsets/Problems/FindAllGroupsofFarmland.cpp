#include <vector>

class Solution {
public:
    void dfs(std::vector<std::vector<int>> &land, int i, int j, int &row, int &col) {
        if (i < 0 || i >= land.size() || j < 0 || j >= land[0].size() || land[i][j] == 0 || land[i][j] == -1) {
            return;
        }

        land[i][j] = -1;
        row = std::max(row, i);
        col = std::max(col, j);

        dfs(land, i + 1, j, row, col);
        dfs(land, i, j + 1, row, col);
    }

    std::vector<std::vector<int>> findFarmland(std::vector<std::vector<int>>& land) {
        std::vector<std::vector<int>> ans;
        for (int i = 0; i < land.size(); i++) {
            for (int j = 0; j < land[0].size(); j++) {
                if (land[i][j] == 1) {
                    int row = 0;
                    int col = 0;
                    dfs(land, i, j, row, col);
                    ans.push_back({i, j, row, col});
                }
            }
        }
        return ans;
    }
};
