#include <vector>

class NeighborSum {
public:
    std::vector<std::vector<int>> grid;
    int n;

    NeighborSum(std::vector<std::vector<int>>& grid) {
        this->grid = grid;
        n = grid.size();
    }
    
    int adjacentSum(int value) {
        int sum = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == value) {
                    if (i > 0) {
                        sum += grid[i - 1][j];
                    }
                    if (i < n - 1) {
                        sum += grid[i + 1][j];
                    }
                    if (j > 0) {
                        sum += grid[i][j - 1];
                    }
                    if (j < n - 1) {
                        sum += grid[i][j + 1];
                    }
                }
            }
        }
        return sum;
    }
    
    int diagonalSum(int value) {
        int sum = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == value) {
                    if (i > 0 && j > 0) {
                        sum += grid[i - 1][j - 1];
                    }
                    if (i > 0 && j < n - 1) {
                        sum += grid[i - 1][j + 1];
                    }
                    if (i < n - 1 && j > 0) {
                        sum += grid[i + 1][j - 1];
                    }
                    if (i < n - 1 && j < n - 1) {
                        sum += grid[i + 1][j + 1];
                    }
                }
            }
        }
        return sum;
    }
};

/**
 * Your NeighborSum object will be instantiated and called as such:
 * NeighborSum* obj = new NeighborSum(grid);
 * int param_1 = obj->adjacentSum(value);
 * int param_2 = obj->diagonalSum(value);
 */
