#include <iostream>
#include <vector>
#include <unordered_map>

class Solution {
public:
    int count;
    std::unordered_map<int, int> memo;

    void backtracking(std::vector<int> &nums, int k, int idx) {
        if (idx == nums.size()) {
            count++;
            return;
        }

        int num = nums[idx];
        if (memo.find(num-k) == memo.end() && memo.find(num+k) == memo.end()) {
            memo[num]++;
            backtracking(nums, k, idx+1);
            memo[num]--;
            if (memo[num] == 0) {
                memo.erase(num);
            }
        }
        backtracking(nums, k, idx+1);
    }
    
    int beautifulSubsets(std::vector<int>& nums, int k) {
        count = 0;
        backtracking(nums, k, 0);
        return count-1;
    }
};
