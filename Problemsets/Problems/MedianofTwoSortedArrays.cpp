#include <vector>
#include <algorithm>

class Solution {
public:
    double findMedianSortedArrays(std::vector<int>& nums1, std::vector<int>& nums2) {
        nums1.insert(nums1.end(), nums2.begin(), nums2.end());
        std::sort(nums1.begin(), nums1.end());
        float median = 0;
        if (nums1.size() % 2 == 0) {
            median = (nums1[nums1.size() / 2] + nums1[nums1.size() / 2 - 1]) / 2.0;
        } else {
            median = nums1[nums1.size() / 2];
        }
        return median;
    }
};
