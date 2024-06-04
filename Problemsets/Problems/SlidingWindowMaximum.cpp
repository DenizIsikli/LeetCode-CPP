#include <vector>
#include <string>
#include <deque>

class Solution {
public:
    std::vector<int> maxSlidingWindow(std::vector<int>& nums, int k) {
        std::deque<int> dq;
        std::vector<int> ans;
        int max = INT_MIN;

        for (int i = 0; i < nums.size(); ++i) {
            if (!dq.empty() && dq.front() == i-k) dq.pop_front();
            
            while (!dq.empty() && nums[dq.back()] <= nums[i]) dq.pop_back();

            dq.push_back(i);
            if (i >= k-1) ans.push_back(nums[dq.front()]);
        }
        return ans;
    }
};

// TLE Solution
/* class Solution {
public:
    std::vector<int> maxSlidingWindow(std::vector<int>& nums, int k) {
        std::vector<int> ans;
        for (int i = 0; i <= nums.size()-k; ++i) {
            int max = INT_MIN;
            for (int j = i; j < i+k; ++j) {
                max = std::max(max, nums[j]);
            }
            ans.push_back(max);
        }
        return ans;
    }
}; */
