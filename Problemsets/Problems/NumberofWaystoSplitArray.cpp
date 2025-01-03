#include <vector>
#include <numeric>

class Solution {
public:
    int waysToSplitArray(std::vector<int>& nums) {
        const int n = nums.size();
        long long sum = std::accumulate(nums.begin(), nums.end(), 0LL);
        long long ans = 0;
        int cnt = 0;
        for (int i = 0; i < n-1; i++) {
            ans+=nums[i];
            cnt+=(2*ans>=sum);
        }
        return cnt;
    }
};
