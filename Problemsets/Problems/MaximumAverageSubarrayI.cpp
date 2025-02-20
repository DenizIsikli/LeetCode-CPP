#include <vector>

using namespace std;

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double res = 0;
        double curr = 0;
        for (int i = 0; i < k; i++) {
            curr+=nums[i];
        }
        res=curr;
        for (int i = k; i < nums.size(); i++) {
            curr+=nums[i]-nums[i-k];
            res=max(res, curr);
        }
        return res/k;
    }
};
