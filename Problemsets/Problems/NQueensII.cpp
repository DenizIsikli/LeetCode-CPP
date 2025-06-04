#include <vector>

using namespace std;

class Solution {
public:
    int solveNQueens(int n, int row, vector<bool> &col, vector<bool> &diag1, vector<bool> &diag2) {
        if (row==n) return 1;
        int count = 0;
        for (int i = 0; i < n; i++) {
            if (!col[i] && !diag1[row + i] && !diag2[row - i + n - 1]) {
                col[i] = diag1[row + i] = diag2[row - i + n - 1] = true;
                count += solveNQueens(n, row + 1, col, diag1, diag2);
                col[i] = diag1[row + i] = diag2[row - i + n - 1] = false;
            }
        }
        return count;
    }

    int totalNQueens(int n) {
        vector<bool> col(n, false), diag1(2 * n - 1, false), diag2(2 * n - 1, false);
        return solveNQueens(n, 0, col, diag1, diag2);
    }
};
