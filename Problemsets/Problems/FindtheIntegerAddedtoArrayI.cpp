#include <vector>

class Solution {
public:
    int addedInteger(std::vector<int>& nums1, std::vector<int>& nums2) {
        int num1 = 0, num2 = 0;
        for (int i = 0; i < nums1.size(); ++i) {
            num1 += nums1[i];
            num2 += nums2[i];
        }
        int res = num2-num1;
        int size = nums1.size();
        return res/size;
    }
};
