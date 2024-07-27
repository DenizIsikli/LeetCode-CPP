#include <string>

class Solution {
public:
    std::string longestPalindrome(std::string s) {
        if (s.size() == 0) return "";
        std::string max_str = s.substr(0,1);

        auto expand_from_center = [&](int left, int right) {
            while (left >= 0 && right < s.size() && s[left] == s[right]) {
                --left;
                ++right;
            }
            return s.substr(left+1, right-left-1);
        };
        
        for (int i = 0; i < s.size(); ++i) {
            std::string odd = expand_from_center(i,i);
            std::string even = expand_from_center(i, i+1);

            if (odd.size() > max_str.size()) max_str = odd;
            if (even.size() > max_str.size()) max_str = even;
        }
        return max_str;
    }
};
