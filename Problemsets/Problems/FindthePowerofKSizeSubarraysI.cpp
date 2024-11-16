#include <vector>
#include <algorithm>

class Solution {
public:
    bool isSorted(std::vector<int>& nums) {
        for (int i = 0; i < nums.size()-1; i++) {
            if (nums[i] > nums[i+1]) {
                return false;
            }
        }
        return true;
    }

    bool isDiffBy1(std::vector<int>& nums) {
        for (int i = 0; i < nums.size()-1; i++) {
            if (nums[i] != nums[i+1] - 1) {
                return false;
            }
        }
        return true;
    }

    std::vector<int> resultsArray(std::vector<int>& nums, int k) {
        std::vector<int> res;

        for (int i = 0; i < nums.size()-k+1; i++) {
            std::vector<int> temp;
            for (int j = i; j < i+k; j++) {
                temp.push_back(nums[j]);
            }
            if (isSorted(temp) && isDiffBy1(temp)) {
                res.push_back(*std::max_element(temp.begin(), temp.end()));
            } else {
                res.push_back(-1);
            }
        }
        return res;
    }
};
