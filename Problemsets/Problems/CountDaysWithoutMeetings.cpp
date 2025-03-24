#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int countDays(int days, vector<vector<int>>& meetings) {
        sort(meetings.begin(), meetings.end());
        int prevend = 0;
        for (auto &m : meetings) {
            int start = max(m[0], prevend+1);
            int length = m[1]-start+1;
            days-=max(0, length);
            prevend=max(prevend, m[1]);
        }
        return days;
    }
};
