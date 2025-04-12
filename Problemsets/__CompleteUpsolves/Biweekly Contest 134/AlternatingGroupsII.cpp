#include <vector>

class Solution {
public:
    int numberOfAlternatingGroups(std::vector<int>& colors, int k) {
        colors.insert(colors.end(), colors.begin(), colors.begin()+k-1);
        int ans = 0;
        int cnt = 1;
        for (int i = 1; i < colors.size(); ++i) {
            if (colors[i] != colors[i-1]) ++cnt;
            else cnt=1;
            if (cnt>=k) ++ans;
        }
        return ans;
    }
};
