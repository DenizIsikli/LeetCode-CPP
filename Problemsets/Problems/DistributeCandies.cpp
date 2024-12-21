#include <set>
#include <vector>

class Solution {
public:
    int distributeCandies(std::vector<int>& candyType) {
        std::set<int> set;
        for (int i = 0; i < candyType.size(); i++) {
            set.insert(candyType[i]);
        }
        
        return std::min(set.size(), candyType.size() / 2);
    }
};
