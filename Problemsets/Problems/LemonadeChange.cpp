#include <vector>

class Solution {
public:
    bool lemonadeChange(std::vector<int>& bills) {
        int five = 0, ten = 0;
        for(auto bill : bills) {
            if (bill == 5) ++five;
            else if (bill == 10 && five >= 1) {
                ++ten;
                --five;
            } else if (bill == 20 && ten >= 1 && five >= 1) {
                --ten;
                --five;
            } else if (bill == 20 && five >= 3) {
                five -= 3;
            } else {
                return false;
            }
        }
        return true;
    }
};
