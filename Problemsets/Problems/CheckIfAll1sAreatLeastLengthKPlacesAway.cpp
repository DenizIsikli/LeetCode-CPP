#include <vector>

using namespace std;

class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int prev = INT_MIN;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) {
                if (prev != INT_MIN && i-prev-1 < k) return false;
                prev = i;
            }
        }
        return true;
    }
};
