#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        sort(points.begin(), points.end());
        int mx = 0;
        for (int i = 1; i < points.size(); i++) {
            mx = max(mx, points[i][0] - points[i - 1][0]);
        }
        return mx;
    }
};
