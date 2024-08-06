#include <string>
#include <vector>
#include <algorithm>

class Solution {
public:
    int minimumPushes(std::string word) {
        int res = 0;
        std::vector<int> freq(26, 0);
        for (char c : word) ++freq[c-'a'];
        std::sort(freq.begin(), freq.end(), std::greater<int>());

        int keyCnt = 0;
        int push = 1;

        for (auto &v : freq) {
            if (v == 0) break;
            res += v*push;
            ++keyCnt;
            if (keyCnt % 8 == 0) ++push;
        }

        return res;
    }
};
