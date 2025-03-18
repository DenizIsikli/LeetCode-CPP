#include <vector>

using namespace std;

class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
        long long ex = 0;
        int mx = 1;
        int l = 0;
        for (int r = 0; r < nums.size(); r++) {
            while ((ex&nums[r])!=0) {
                ex-=nums[l];
                l++;
            }
            ex+=nums[r];
            mx = max(mx, r-l+1);
        }
        return mx;
    }
};
