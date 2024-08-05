#include <string>
#include <vector>
#include <unordered_map>

class Solution {
public:
    std::string kthDistinct(std::vector<std::string>& arr, int k) {
        std::unordered_map<std::string, int> mp;
        for (auto &c : arr) ++mp[c];
        for (auto &c : arr) {
            if (mp[c] == 1) {
                if (k == 1) return c;
                --k;
            }
        }
        return "";
    }
};
