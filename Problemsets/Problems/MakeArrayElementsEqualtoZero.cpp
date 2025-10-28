#include <vector>
#include <cmath>

using namespace std;

class Solution {
public:
    int countValidSelections(vector<int>& nums) {
        int ans=0,left=0,right=0;
        for(int i=0;i<nums.size();i++)right+=nums[i];
        for(int i=0;i<nums.size();i++){
            left+=nums[i],right-=nums[i];
            if(nums[i]!=0)continue;
            if(left==right)ans+=2;
            if(abs(left-right)==1)ans++;
        }
        return ans;
    }
};
