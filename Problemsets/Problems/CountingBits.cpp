#include <vector>

class Solution {
public:
    std::vector<int> countBits(int n) {
        std::vector<int> bits(n+1, 0);
        for (int i = 1; i <= n; ++i) {
             int count = 0;
             int num = i;
             while (num) {
                 count += num&1;
                 num >>= 1;
             }
             bits[i] = count;
        }
        return bits;
    }
};
