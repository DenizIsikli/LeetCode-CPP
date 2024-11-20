#include <string>
#include <vector>
#include <algorithm>

class Solution {
public:
    int takeCharacters(std::string s, int k) {
        std::vector<int> cnt(3, 0);
        for (char c : s) {
            cnt[c-'a']++;
        }

        if (*std::min_element(cnt.begin(), cnt.end()) < k) {
            return -1;
        }
         
        int res = 1e9;
        int l = 0;
        for (int r = 0; r < s.size(); r++) {
            cnt[s[r]-'a']--;
            while (*std::min_element(cnt.begin(), cnt.end()) < k) {
                cnt[s[l]-'a']++;
                l++;
            }
            res = std::min(res, static_cast<int>(s.size()-r+l-1));
        }
        return res;
    }
};
