#include <vector>
#include <climits>

using namespace std;

class Solution {
public:
    int minimumSubarrayLength(vector<int>& nums, int k) {
        vector<int>bitCnt(32,0);
        int currOR=0,l=0,ans=INT_MAX;
        for(int r=0;r<nums.size();r++){
            currOR|=nums[r];
            for(int i=0;i<32;i++){
                if(nums[r]&(1<<i))bitCnt[i]++;
            }
            while(l<=r&&currOR>=k){
                ans=min(ans,r-l+1);
                int updatedOR=0;
                for(int i=0;i<32;i++){
                    if(nums[l]&(1<<i))bitCnt[i]--;
                    if(bitCnt[i]>0)updatedOR|=(1<<i);
                }
                currOR=updatedOR;
                l++;
            }
        }
        return ans==INT_MAX?-1:ans;
    }
};
