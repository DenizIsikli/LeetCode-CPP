#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int maximumStrongPairXor(vector<int>& nums) {
        int ans=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            for(int j=i;j<nums.size()&&nums[j]<=2*nums[i];j++){
                ans=max(ans,nums[i]^nums[j]);
            }
        }
        return ans;
    }
};
