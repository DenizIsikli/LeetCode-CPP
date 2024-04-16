#include <vector>
#include <set>

class Solution {
public:
    int thirdMax(std::vector<int>& nums) {
        // for every element in the list, output the third maximum number
        std::set<int> temp;
        for (int i = 0; i < nums.size(); ++i) {
            temp.insert(nums[i]);
        }

        int res = 0;

        if (temp.size() < 3) {
            res = *temp.rbegin();
        } else {
            std::set<int>::iterator it = temp.end();
            for (int i = 0; i < 3; ++i) {
                --it;
            }
            res = *it;
        }
        return res;
    }
};
