#include <vector>

using namespace std;

class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> res(nums.size());
        vector<int> prefix(nums.size()+1, 0);
        vector<int> suffix(nums.size()+1, 0);

        for (int i = 0; i < nums.size(); i++) prefix[i+1] = prefix[i]+nums[i];
        for (int i = nums.size()-1; i >= 0; i--) suffix[i] = suffix[i+1]+nums[i];
        for (int i = 0; i < nums.size(); i++) res[i] = abs(prefix[i]-suffix[i+1]);
        return res;
    }
};
