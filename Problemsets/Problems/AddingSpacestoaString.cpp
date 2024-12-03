#include <cmath>
#include <string>
#include <vector>

class Solution {
public:
    std::string addSpaces(std::string s, std::vector<int>& spaces) {
        int n = s.size(), m = spaces.size();
        std::string res(n+m, ' ');

        int j = 0;
        for (int i = 0; i < s.size(); i++) {
            if (j < m && i == spaces[j]) {
                res[i+j] = ' ';
                j++;
            }
            res[i+j] = s[i];
        }
        return res;
    }
};
