#include <vector>

using namespace std;

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int> prefix(nums.size(), 0);
        for (int i = 0; i < nums.size(); i++) {
            prefix[i] = (i==0) ? nums[i] : prefix[i-1]+nums[i];
        }

        for (int i = 0; i < prefix.size(); i++) {
            if (prefix[nums.size()-1]-prefix[i]==prefix[i]-nums[i]) {
                return i;
            }
        }
        return -1;
    }
};

