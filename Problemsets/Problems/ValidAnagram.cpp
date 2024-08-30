#include <string>
#include <map>

class Solution {
public:
    bool isAnagram(std::string s, std::string t) {
        std::map<char, int> mp;
        if (s.size() != t.size()) return false;

        for (int i = 0; i < s.size(); i++) {
            mp[s[i]]++;
            mp[t[i]]--;
        }

        for (auto it = mp.begin(); it != mp.end(); it++) {
            if (it->second != 0) return false;
        }
        return true;
    }
};
