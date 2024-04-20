#include <string>
#include <algorithm>

class Solution {
public:
    int minPartitions(std::string n) {
        return *std::max_element(n.begin(), n.end()) - '0';
    }
};
