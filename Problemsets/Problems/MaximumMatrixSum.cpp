#include <vector>
#include <climits>
#include <algorithm>

class Solution {
public:
    long long maxMatrixSum(std::vector<std::vector<int>>& matrix) {
        long long sum = 0;
        int minAbs = INT_MAX, cntNeg = 0;
        for (auto &row : matrix) {
            for (int x : row) {
                minAbs = std::min(minAbs, std::abs(x));
                if (x<0) {
                    sum-=x;
                    cntNeg++;
                } else {
                    sum+=x;
                }
            }
        }
        return (cntNeg%2==0) ? sum : sum-2*minAbs;
    }
};
