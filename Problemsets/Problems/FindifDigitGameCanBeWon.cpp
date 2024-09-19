#include <vector>

class Solution {
public:
    bool canAliceWin(std::vector<int>& nums) {
        int single_digit = 0;
        int double_digit = 0;
        for (int x : nums) {
            if (x >= 10) double_digit+=x;
            else single_digit+=x;
        }
        if (single_digit==double_digit) return false;
        else return true;
    }
};
