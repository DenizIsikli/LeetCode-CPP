#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int canFormPairs(vector<int>& nums, int p, int maxDiff) {
        int pairs = 0;
        int n = nums.size();

        for (int i = 1; i < n; ++i) {
            if (nums[i]-nums[i-1] <= maxDiff) {
                pairs++;
                i++;
            }
        }

        return pairs >= p;
    }
        
    int minimizeMax(vector<int>& nums, int p) {
        sort(nums.begin(), nums.end());
        int left = 0, right = nums.back() - nums.front();
        int res = 0;

        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (canFormPairs(nums, p, mid)) {
                res = mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }

        return res;
    }
};
