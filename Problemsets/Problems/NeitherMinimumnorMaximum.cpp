#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        if(nums.size()<3)return -1;
        sort(nums.begin(),nums.end());
        int ans=nums[1];
        return ans;
    }
};
