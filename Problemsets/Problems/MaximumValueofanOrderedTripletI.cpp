#include <vector>

using namespace std;

class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        int n = nums.size();
        long long L=nums[0], maxD=L-nums[1], res=max(0LL, maxD*nums[2]);
        for (int i=3; i<n; i++) {
            L=max(L, (long long)nums[i-2]);
            maxD=max(maxD, L-nums[i-1]);
            res=max(res, maxD*nums[i]);
        }
        return res;
    }
};
