#include <vector>

using namespace std;

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int> prefix(nums.size()+1, 0);
        for (int i = 0; i < nums.size(); i++) {
            prefix[i+1] = prefix[i] + nums[i];
        }

        for (int i = 1; i < prefix.size(); i++) {
            if ((prefix[prefix.size()-1]-nums[i-1])-prefix[i-1] == prefix[i-1]) {
                return i-1;
            }
        }
        return -1;
    }
};
