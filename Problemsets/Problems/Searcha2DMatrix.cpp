#include <vector>

class Solution {
public:
    bool searchMatrix(std::vector<std::vector<int>>& matrix, int target) {
        int n = matrix.size();
        if (n == 0) return false;
        int m = matrix[0].size();
        if (m == 0) return false;

        int l = 0, r = n*m-1;

        while (l <= r) {
            int mid = l + (r-l)/2;
            int mid_val = matrix[mid/m][mid%m];

            if (mid_val == target) return true;
            else if (mid_val < target) {
                l = mid+1;
            } else {
                r = mid-1;
            }
        }
        return false;
    }
};
