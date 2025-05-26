#include <vector>

using namespace std;

class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int initXOR = 0;
        for (auto &x : nums) {
            initXOR ^= x;
        }
        int res = 0;
        while (initXOR || k) {
            if ((k%2) != (initXOR % 2)) {
                res++;
            }
            initXOR /= 2;
            k /= 2;
        }
        return res;
    }
};
