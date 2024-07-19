#include <vector>
#include <algorithm>

class Solution {
public:
    std::vector<int> luckyNumbers (std::vector<std::vector<int>>& matrix) {
        std::vector<int> ans;
        for (int i = 0; i < matrix.size(); ++i) {
            int min = *std::min_element(matrix[i].begin(), matrix[i].end());
            int minidx = std::min_element(matrix[i].begin(), matrix[i].end()) - matrix[i].begin();

            std::vector<int> col;
            for (int j = 0; j < matrix.size(); ++j) {
                col.push_back(matrix[j][minidx]);
            }
            int max  = *std::max_element(col.begin(), col.end());
            if (min == max) ans.push_back(min);
        }
        return ans;
    }
};
