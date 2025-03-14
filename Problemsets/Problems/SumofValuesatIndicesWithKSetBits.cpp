#include <vector>

using namespace std;

class Solution {
public:
    int nrSetBits(int x) {
        int cnt = 0;
        while (x) {
            if (x%2==1) cnt++;
            x >>= 1;
        }
        return cnt;
    }

    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int sum = 0;
        for (int i=0; i<nums.size(); i++) {
            if (nrSetBits(i) == k) sum += nums[i];
        }
        return sum;
    }
};
