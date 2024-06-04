#include <string>
#include <vector>

class Solution {
public:
    std::string convert(std::string s, int numRows) {
        if (numRows==1) return s;
        std::vector<std::vector<char>> rows(numRows);
        int idx = 0, d = 1;

        for (char c : s) {
            rows[idx].push_back(c);
            if(idx==0) d=1;
            else if(idx==numRows-1) d=-1;
            idx+=d;
        }

        std::string ans;
        for (auto &row : rows) {
            for (char c : row) {
                ans.push_back(c);
            }
        }
        return ans;
    }
};
