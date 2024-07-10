#include <string>
#include <vector>
#include <unordered_map>

class Solution {
public:
    int minOperations(std::vector<std::string>& logs) {
        int ans = 0;
        for (const auto &log : logs) {
            if (log == "../") {
                if (ans > 0) {
                    --ans;
                }
            } else if (log != "./") {
                ++ans;
            }
        }
        return ans;
    }
};
