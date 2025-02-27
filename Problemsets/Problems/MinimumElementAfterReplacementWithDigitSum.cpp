#include <vector>

using namespace std;

class Solution {
public:
    int minElement(vector<int>& nums) {
        int res = INT_MAX;
        for (int i = 0; i < nums.size(); i++) {
            int mn = nums[i];
            int temp = 0;
            while (mn>0) {
                temp += mn%10;
                mn /= 10;
            }
            res = min(res, temp);
        }
        return res;
    }
};
