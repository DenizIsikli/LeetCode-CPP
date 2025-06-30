#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int findLHS(vector<int>& nums) {
        int res=0;
        int l=0,r=0;
        sort(nums.begin(),nums.end());
        while(r<nums.size()){
            if(nums[r]-nums[l]==1){
                res=max(res,r-l);
            }else if(nums[r]-nums[l]>1){
                while(nums[r]-nums[l]>1)l++;
            }
            r++;
        }
        return res;
    }
};
