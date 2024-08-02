#include <vector>
#include <unordered_map>

class Solution {
public:
    std::vector<std::vector<int>> groupThePeople(std::vector<int>& groupSizes) {
        std::vector<std::vector<int>> res;
        std::unordered_map<int, std::vector<int>> groups;
        for (int i = 0; i < groupSizes.size(); i++) {
            groups[groupSizes[i]].push_back(i);
            if (groups[groupSizes[i]].size() == groupSizes[i]) {
                res.push_back(groups[groupSizes[i]]);
                groups[groupSizes[i]].clear();
            }
        }
        return res;
    }
};
