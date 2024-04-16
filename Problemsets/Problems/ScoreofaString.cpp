#import <string>

class Solution {
public:
    int scoreOfString(std::string s) {
        int res = 0;

        for (int i = 1; i < s.size(); ++i) {
            int temp = (s[i-1] - 'a' + 1) - (s[i] - 'a' + 1);
            res += std::abs(temp);
            temp = 0;
        }

        return res;
    }
};
