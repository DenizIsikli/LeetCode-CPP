#include <vector>

using namespace std;

class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        int n=nums.size();
        long long cnt=0,res=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0)cnt++;
            else{
                res+=(cnt*(cnt+1))/2;
                cnt=0;
            }
        }
        if(cnt>0) res += (cnt * (cnt + 1)) / 2;
        return res;
    }
};
