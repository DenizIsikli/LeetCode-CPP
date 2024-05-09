#include <string>
#include <vector>
#include <unordered_map>

class Solution {
public:
    std::vector<std::string> findRepeatedDnaSequences(std::string s) {
        std::vector<std::string> ans;
        if (s.size() < 11) return ans;
        int l = 0, r = 9;
        std::unordered_map<std::string, int> cnt;
        std::string temp = "";
        while (r < s.size()) {
            temp = s.substr(l, r-l+1);
            if (++cnt[temp] == 2) {
                ans.push_back(temp);
            }
            l++;
            r++;
        }
        return ans;
    }
};
