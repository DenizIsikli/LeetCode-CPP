#include <vector>
#include <unordered_set>

class Solution {
public:
    bool isValidSudoku(std::vector<std::vector<char>>& board) {
        for (int i = 0; i < 9; i++){
            std::unordered_set<char> row;
            std::unordered_set<char> col;
            std::unordered_set<char> box;
            for (int j = 0; j < 9; j++){
                if (board[i][j] != '.' && row.find(board[i][j]) != row.end()){
                    return false;
                }
                if (board[j][i] != '.' && col.find(board[j][i]) != col.end()){
                    return false;
                }
                int boxRow = 3 * (i / 3) + j / 3;
                int boxCol = 3 * (i % 3) + j % 3;
                if (board[boxRow][boxCol] != '.' && box.find(board[boxRow][boxCol]) != box.end()){
                    return false;
                }
                row.insert(board[i][j]);
                col.insert(board[j][i]);
                box.insert(board[boxRow][boxCol]);
            }
        }

        return true;
    }
};
