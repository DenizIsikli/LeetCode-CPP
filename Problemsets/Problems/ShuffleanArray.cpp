#include <vector>
#include <algorithm>
#include <random>

class Solution {
public:
    std::vector<int> original;
    std::vector<int> shuffled;

    Solution(std::vector<int>& nums) {
        original = nums;
        shuffled = nums;
    }
    
    std::vector<int> reset() {
        return original;
    }

    std::vector<int> shuffle() {
        int random = rand();
        random = random%original.size();
        std::swap(shuffled[0], shuffled[random]);
        return shuffled;
    }    
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */