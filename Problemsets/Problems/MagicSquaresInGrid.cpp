#include <vector>

class Solution {
    bool isMagic(std::vector<std::vector<int>> &grid, int i, int j) {
        std::vector<int> count(10, 0);
        for (int x = 0; x < 3; ++x) {
            for (int y = 0; y < 3; ++y) {
                int num = grid[i+x][j+y];
                if (num < 1 || num > 9 || count[num] > 0) return false;
                count[num]++;
            }
        }
    
        int sum = grid[i][j] + grid[i][j+1] + grid[i][j+2];
            
        for (int x = i; x < 3; ++x) {
            if (grid[i][j] + grid[i][j+1] + grid[i][j+2] != sum) return false;
        }

        for (int y = j; y < 3; ++y) {
            if (grid[i][j] + grid[i+1][j] + grid[i+2][j] != sum) return false;
        }
        
        if(sum != (grid[i][j] + grid[i+1][j+1] + grid[i+2][j+2])) return false;
        if(sum != (grid[i+2][j] + grid[i+1][j+1] + grid[i][j+2])) return false;

        return true;
    }

public:
    int numMagicSquaresInside(std::vector<std::vector<int>>& grid) {
        int cnt = 0;
        
        if(grid.size() < 3 || grid[0].size() < 3) return 0;

        for(int i = 0; i <= grid.size()-3; ++i) {
            for(int j = 0; j <= grid[0].size()-3; ++j) {
                if(isMagic(grid, i, j)) cnt++;
            }
        }
        return cnt;
    }
};
