#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        vector<int>maxSides;
        for(const auto&rec:rectangles)maxSides.push_back(min(rec[0], rec[1]));
        int mx=*max_element(maxSides.begin(),maxSides.end());
        int cnt=0;
        for(const auto&side:maxSides)if(side==mx)cnt++;
        return cnt;
    }
};
