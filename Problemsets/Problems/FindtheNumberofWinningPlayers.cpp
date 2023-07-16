#include <vector>

using namespace std;

class Solution {
public:
    int winningPlayerCount(int n, vector<vector<int>>& pick) {
        vector<vector<int>> fq(n, vector<int>(11, 0));
        for (auto &p : pick) {
            fq[p[0]][p[1]]++;
        }

        int res = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j <= 10; j++) {
                if (fq[i][j]>i) {
                    res++;
                    break;
                }
            }
        }
        return res;
    }
};
