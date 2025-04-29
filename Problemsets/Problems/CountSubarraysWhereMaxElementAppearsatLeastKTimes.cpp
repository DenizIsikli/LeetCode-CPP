#include <vector>

using namespace std;

class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        long maxi = *max_element(nums.begin(), nums.end()), maxiOccur = 0, res = 0;
        int left = 0;

        for (int r = 0; r < nums.size(); r++) {
            if (nums[r] == maxi) ++maxiOccur;
            while (maxiOccur >= k) {
                if (nums[left] == maxi) --maxiOccur;
                ++left;
            }
            res += left;
        }

        return res;
    }
};
