#include <vector>
#include <algorithm>

class Solution {
public:
    std::vector<std::vector<int>> fourSum(std::vector<int>& nums, int target) {
        std::sort(nums.begin(), nums.end());
        std::vector<std::vector<int>> res;
        for (int i = 0; i < nums.size(); ++i) {
            for (int j = i+1; j < nums.size(); ++j) {
                int l = j + 1, r = nums.size()-1;
                while (l<r) {
                    long long sum = nums[i];
                    sum += nums[j];
                    sum += nums[l];
                    sum += nums[r];
                    if (sum == target) {
                        std::vector<int> temp = {nums[i], nums[j], nums[l], nums[r]};
                        if (std::find(res.begin(), res.end(), temp) == res.end()) res.push_back(temp);
                        ++l;
                        --r;
                    }
                    else if (sum < target) ++l;
                    else --r;
                }
            }
        }
        return res;
    }
};
