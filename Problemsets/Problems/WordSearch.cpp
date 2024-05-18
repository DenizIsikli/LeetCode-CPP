#include <vector>
#include <string>

class Solution {
public:
    bool backtracking(std::vector<std::vector<char>>& board, std::string& word, int i, int j, int k) {
        if (k == word.size()) return true;
        if (i<0 || i>=board.size() || j<0 || j>=board[0].size() || board[i][j] != word[k]) return false;
        char temp = board[i][j];
        board[i][j] = 0;
        bool res = backtracking(board, word, i+1, j, k+1) || backtracking(board, word, i-1, j, k+1) || backtracking(board, word, i, j+1, k+1) || backtracking(board, word, i, j-1, k+1);
        board[i][j] = temp;
        return res;
    }

    bool exist(std::vector<std::vector<char>>& board, std::string word) {
        for (int i = 0; i < board.size(); i++) {
            for (int j = 0; j < board[0].size(); j++) {
                if (backtracking(board, word, i, j, 0)) return true;
            }
        }
        return false;
    }
};
