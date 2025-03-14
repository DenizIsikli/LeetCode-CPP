#include <vector>
#include <numeric>

using namespace std;

class Solution {
public:
    int maximumCandies(vector<int>& candies, long long k) {
        long long sum = accumulate(candies.begin(), candies.end(), 0LL);
        if (sum<k) return 0;
        int low = 1, high = *max_element(candies.begin(), candies.end());
        int res = 0;

        while (low<=high) {
            int mid = low+(high-low)/2;
            long long cnt = 0;
            for (auto &x : candies) {
                cnt += x/mid;
            }

            if (cnt>=k) {
                res = mid;
                low = mid+1;
            } else {
                high = mid-1;
            }
        }
        return res;
    }
};
