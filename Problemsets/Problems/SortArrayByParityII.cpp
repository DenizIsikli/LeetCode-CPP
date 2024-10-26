#include <vector>

class Solution {
public:
    std::vector<int> sortArrayByParityII(std::vector<int>& nums) {
        std::vector<int> v1, v2;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i]%2==0) v1.push_back(nums[i]);
            else v2.push_back(nums[i]);
        }

        int l1 = 0, l2 = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (i%2==0) nums[i]=v1[l1++];
            else nums[i]=v2[l2++];
        }
        return nums;
    }
};
