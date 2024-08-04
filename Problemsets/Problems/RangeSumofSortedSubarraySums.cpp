#include <vector>
#include <algorithm>

class Solution {
public:
    int rangeSum(std::vector<int>& nums, int n, int left, int right) {
        std::vector<int> sum;
        for (int i = 0; i < n; ++i) {
            long long temp = 0;
            for (int j = i; j < n; ++j) {
                temp += nums[j];
                sum.push_back(temp);
            }
        }

        std::sort(sum.begin(), sum.end());
        long long res = 0;
        while (left <= right) {
            if (right != left) res += sum[right-1] + sum[left-1];
            if (right == left) res += sum[left-1];
            ++left;
            --right;
        }
        int ans = res % 1000000007;
        return ans;
    }
};
