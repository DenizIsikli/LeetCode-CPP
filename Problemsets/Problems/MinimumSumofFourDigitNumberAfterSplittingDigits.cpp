#include <string>
#include <algorithm>

class Solution {
public:
    int minimumSum(int num) {
        std::string nums = std::to_string(num);
        sort(nums.begin(), nums.end());
        int a = 0, b = 0;
        for (int i = 0; i < nums.size(); ++i) {
            if (i%2==0) a = a*10 + (nums[i]-'0');
            else b = b*10 + (nums[i]-'0');
        }
        return a+b;
    }
};
