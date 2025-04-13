#include <vector>

using namespace std;

class Solution {
public:
    int countMaxOrSubsets(vector<int>& nums) {
        int maxOr = 0;
        int cnt = 0;
        int n = nums.size();

        for (auto &x : nums) maxOr |= x;
        for (int i = 0; i < (1<<n); i++) {
            int orSum = 0;
            for (int j = 0; j < n; j++) {
                if (i & (1<<j)) {
                    orSum |= nums[j];
                }
            }
            if (orSum == maxOr) cnt++;
        }
        return cnt;
    }
};

