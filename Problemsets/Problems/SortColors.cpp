#include <vector>
#include <algorithm>

class Solution {
public:
    void sortColors(std::vector<int>& nums) {
        int zero = 0, one = 0, two = 0;
        for (auto &x : nums) {
            if (x==0) zero++;
            if (x==1) one++;
            if (x==2) two++;
        }

        for (int i = 0; i < nums.size(); i++) {
            while (zero>0) {
                nums[i] = 0;
                zero--;
                i++;
            }
            while (one>0) {
                nums[i] = 1;
                one--;
                i++;
            }
            while (two>0) {
                nums[i] = 2;
                two--;
                i++;
            }
        }
    }
};

// O^2 approach
// for (int i = 0; i < nums.size(); ++i) {
//     for (int j = i+1; j < nums.size(); ++j) {
//         if (nums[i] > nums[j]) {
//             std::swap(nums[i], nums[j]);
//         }
//     }
// }

