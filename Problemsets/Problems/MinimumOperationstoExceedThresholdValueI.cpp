#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());       
        int cnt = 0;
        for (auto &x : nums) {
            if (x<k) cnt++;
        }
        return cnt;
    }
};
