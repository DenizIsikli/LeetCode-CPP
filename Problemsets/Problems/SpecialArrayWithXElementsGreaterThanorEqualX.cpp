#include <vector>

class Solution {
public:
    int specialArray(std::vector<int>& nums) {
        for (int x = 1; x <= nums.size(); x++) {
            int count = 0;
            for (int num : nums) {
                if (num >= x) {
                    count++;
                }
            }
            if (count == x) {
                return x;
            }
        }
        return -1;
    }
};
