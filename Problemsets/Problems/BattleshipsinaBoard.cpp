#include <vector>

class Solution {
public:
    std::pair<int, int> directions[4] = {{-1, 0}, {0, -1}, {1, 0}, {0, 1}};

    void battleship (std::vector<std::vector<char>> &board, int i, int j) {
        board[i][j] = '.';
        for (int k = 0; k < 4; k++) {
            int row = i+directions[k].first;
            int col = j+directions[k].second;
            if (row >= 0 && col >= 0 && row < board.size() && col < board[0].size() && board[row][col] == 'X') {
                battleship(board, row, col);
            }
        }
    }

    int countBattleships(std::vector<std::vector<char>>& board) {
        int res = 0;
        for (int i = 0; i < board.size(); i++) {
            for (int j = 0; j < board[0].size(); j++) {
                if (board[i][j] == 'X') {
                    res+=1;
                    battleship(board, i, j);
                }
            }
        }
        return res;
    }
};
