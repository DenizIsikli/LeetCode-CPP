#include <vector>

class Solution {
public:
    std::vector<std::vector<char>> rotateTheBox(std::vector<std::vector<char>>& box) {
        int r = box.size();
        int c = box[0].size();

        for (int i = 0; i < r; i++) {
            int last = c - 1;
            for (int j = c - 1; j >= 0; j--) {
                if (box[i][j] == '*') {
                    last = j - 1;
                } else if (box[i][j] == '#') {
                    box[i][j] = '.';
                    box[i][last] = '#';
                    last--;
                }
            }
        }

        std::vector<std::vector<char>> res(c, std::vector<char>(r));
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                res[j][r - i - 1] = box[i][j];
            }
        }

        return res;
    }
};
