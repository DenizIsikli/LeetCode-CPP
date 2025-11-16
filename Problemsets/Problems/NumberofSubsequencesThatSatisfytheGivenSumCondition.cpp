#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {
        int mod=1e9+7;
        int n=nums.size();
        int cnt=0;
        int l=0,r=n-1;
        vector<int>pw(n,1);
        sort(nums.begin(),nums.end());
        for(int i=1;i<n;i++){
            pw[i]=(pw[i-1]*2)%mod;
        }
        while(l<=r){
            if(nums[l]+nums[r]<=target){
                cnt=(cnt+pw[r-l])%mod;
                l++;
            }else{r--;}
        }
        return cnt;
    }
};
