#include <vector>

class Solution {
public:
    int numberOfAlternatingGroups(std::vector<int>& colors) {
        colors.insert(colors.end(), colors.begin(), colors.begin()+2);
        int ans = 0;
        int cnt = 1;
        for (int i = 1; i < colors.size(); ++i) {
            if (colors[i] != colors[i-1]) ++cnt;
            else cnt=1;
            if (cnt>=3) ++ans;
        }
        return ans;
    }
};

// Old version:
/* int ans = 0;
for (int i = 0; i < colors.size(); ++i) {
    if (i==0) {
        if (colors[i] != colors[colors.size()-1] && colors[i] != colors[i+1]) ans++;
    } else if (i == colors.size()-1) {
        if (colors[i] != colors[i-1] && colors[i] != colors[0]) ans++;
    } else {
        if (colors[i] != colors[i-1] && colors[i] != colors[i+1]) ans++;
    }
}
return ans; */