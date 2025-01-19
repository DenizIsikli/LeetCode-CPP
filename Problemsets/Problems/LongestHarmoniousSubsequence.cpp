#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int findLHS(vector<int>& nums) {
        int i = 0;
        int left = 0, right = 0;
        int temp = 0, res = 0;
        sort(nums.begin(), nums.end());

        while (right<nums.size()) {
            if (nums[right]-nums[left]==1) {
                temp = right-left+1;
                res = max(res, temp);
            } else if (nums[right]-nums[left]>1) {
                while (nums[right]-nums[left]>1) left++;
            }
            right++;
        }

        return res;
    }
};
