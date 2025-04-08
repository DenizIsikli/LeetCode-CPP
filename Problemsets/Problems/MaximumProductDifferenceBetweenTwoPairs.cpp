#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int l = nums[0]*nums[1];
        int r = nums[nums.size()-1]*nums[nums.size()-2];
        return r-l;
    }
};
