#include <vector>
#include <algorithm>

class Solution {
public:
    std::vector<bool> kidsWithCandies(std::vector<int>& candies, int extraCandies) {
        int max = *std::max_element(candies.begin(), candies.end());
        std::vector<bool> res;

        for (int i = 0; i < candies.size(); ++i) {
            if (candies[i] + extraCandies >= max) {
                res.push_back(true);
            } else {
                res.push_back(false);
            }
        }
        return res;
    }
};
