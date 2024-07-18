#include <string>
#include <vector>

class Solution {
public:
    std::vector<int> minOperations(std::string boxes) {
        int n = boxes.size();
        std::vector<int> ans(n);
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (boxes[j] == '1') {
                    ans[i] += std::abs(i - j);
                }
            }
        }
        return ans;
    }
};
