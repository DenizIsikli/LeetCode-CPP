#include <vector>

using namespace std;

class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int res = 0;

        for (int i = 0; i < nums.size(); i++) {
            int tmp = nums[i];
            int j = i+1;
            while (j<nums.size() && nums[j]>nums[j-1]) {
                tmp+=nums[j];
                j++;
            }
            res=max(res, tmp);
            i = j-1;
        }
        return res;
    }
};
