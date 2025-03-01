#include <vector>

using namespace std;

class Solution {
public:
    int sumOfGoodNumbers(vector<int>& nums, int k) {
        int n = nums.size();
        int sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (i-k<0&&i+k<n&&nums[i]>nums[i+k]) sum+=nums[i];
            else if (i-k>=0&&i+k>=n&&nums[i]>nums[i-k]) sum+=nums[i];
            else if (i-k>=0&&i+k<n&&nums[i]>nums[i-k]&&nums[i]>nums[i+k]) sum+=nums[i];
            else if (i-k<0&&i+k>=n) sum+=nums[i];
        }
        return sum;
    }
};
