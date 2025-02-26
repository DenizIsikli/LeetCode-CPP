#include <numeric>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    int finalPositionOfSnake(int n, vector<string>& commands) {
        vector<int> pre(n);
        iota(pre.begin(), pre.end(), 0);
        int x = 0, y = 0;
        for (auto &s : commands) {
            if (s=="RIGHT") x++;
            if (s=="LEFT") x--;
            if (s=="UP") y--;
            if (s=="DOWN") y++;
        }
        return pre[x%n]+y*n;
    }
};

