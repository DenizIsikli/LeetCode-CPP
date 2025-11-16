#include <vector>

using namespace std;

class Solution {
public:
    int maxIncreasingSubarrays(vector<int>& nums) {
        int cnt=1,preUp=0,ans=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]>nums[i-1])cnt++;
            else{
                preUp=cnt;
                cnt=1;
            }
            int hf=cnt>>1;
            int m=min(preUp,cnt);
            int cand=max(hf,m);
            ans=max(ans,cand);
        }
        return ans;
    }
};
