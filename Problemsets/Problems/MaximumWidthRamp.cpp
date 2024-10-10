#include <vector>
#include <stack>

class Solution {
public:
    int maxWidthRamp(std::vector<int>& nums) {
        int n = nums.size();
        std::stack<int> st;
        for (int i = 0; i < n; i++) {
            if (st.empty() || nums[st.top()] > nums[i]) {
                st.push(i);
            }
        }
        int res = 0;
        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && nums[st.top()] <= nums[i]) {
                res = std::max(res, i - st.top());
                st.pop();
            }
        }
        return res;
    }
};
