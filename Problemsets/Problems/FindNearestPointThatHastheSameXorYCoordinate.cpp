#include <vector>

using namespace std;

class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int mn = INT_MAX, idx = 0;
        for (int i = 0; i < points.size(); i++) {
            int x1 = points[i][0];
            int y1 = points[i][1];

            if (x==x1||y==y1) {
                int tempManhDist = abs(x-x1)+abs(y-y1);
                if (tempManhDist<mn) {
                    mn = tempManhDist;
                    idx = i;
                }
            }
        }
        return (mn<INT_MAX ? idx : -1);
    }
};
