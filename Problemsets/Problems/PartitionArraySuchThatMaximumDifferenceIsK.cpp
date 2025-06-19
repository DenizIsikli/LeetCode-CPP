#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        if (nums.empty()) return 0;
        sort(nums.begin(),nums.end());
        int start=nums[0];
        int ans=0;
        for (int i=0;i<nums.size();++i) {
            if (nums[i]-start>k) {
                ans++;
                start=nums[i];
            }
        }
        return ans+1;
    }
};
