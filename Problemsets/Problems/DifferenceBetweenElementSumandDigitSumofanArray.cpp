#include <vector>
#include <numeric>

using namespace std;

class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int eleSum = accumulate(nums.begin(), nums.end(), 0);       
        int digSum = 0;
        for (auto &x : nums) {
            while (x) {
                digSum+=x%10;
                x/=10;
            } 
        }
        return abs(eleSum-digSum);
    }
};
