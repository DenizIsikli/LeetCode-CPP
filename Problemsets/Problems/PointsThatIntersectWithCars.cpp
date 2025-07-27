#include <vector>

using namespace std;

class Solution {
public:
    int numberOfPoints(vector<vector<int>>& nums) {
        int n = nums.size();
        vector<int> freq(101, 0);
        for (int i = 0; i < n; i++) {
            for (int j = nums[i][0]; j <= nums[i][1]; j++) {
                freq[j]++;
            }
        }
        int count = 0;
        for (int i = 0; i < 101; i++) {
            if (freq[i] > 0) {
                count++;
            }
        }
        return count;
    }
};
