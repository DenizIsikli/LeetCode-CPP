#include <string>

using namespace std;

class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int max_b = 0, idx = 0;
        int left = 0, right = k;
        while (right-1<blocks.size()) {
            int cnt = 0;
            for (int i = left; i < right; i++) {
                if (blocks[i] == 'B') cnt++;
            }
            if (cnt > max_b) {
                max_b = cnt;
                idx = left;
            }
            left++;
            right++;
        }
        int res = 0;
        for (int i = idx; i < idx + k; i++) {
            if (blocks[i] == 'W') res++;
        }
        return res;
    }
};
