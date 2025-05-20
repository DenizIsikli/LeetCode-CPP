#include <vector>

using namespace std;

class Solution {
public:
    bool isZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        vector<int> pre(nums.size() + 1, 0);
        for (auto &q : queries) {
            pre[q[0]]++;
            pre[q[1] + 1]--;
        }

        for (int i = 1; i < nums.size(); i++) pre[i] += pre[i-1];
        for (int i = 0; i < nums.size(); i++) if (nums[i]>pre[i]) return false;
        return true;
    }
};
