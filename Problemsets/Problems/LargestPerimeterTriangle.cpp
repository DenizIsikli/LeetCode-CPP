#include <vector>

using namespace std;

class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        int mx=0;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                for(int k=j+1;k<nums.size();k++){
                    if(nums[i]+nums[j]>nums[k]&&nums[j]+nums[k]>nums[i]&&nums[k]+nums[i]>nums[j]){
                        mx=max(mx,nums[i]+nums[j]+nums[k]);
                    }
                }
            }
        }
        return mx;
    }
};
