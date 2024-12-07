#include <vector>

class Solution {
public:
    int minimumSize(std::vector<int>& nums, int maxOperations) {
        int left = 1, right = 1e9;
        while (left < right) {
            int mid = (left + right) / 2;
            int count = 0;
            for (int num : nums) {
                count += (num - 1) / mid;
            }
            if (count > maxOperations) {
                left = mid + 1;
            } else {
                right = mid;
            }
        }
        return left;
    }
};
