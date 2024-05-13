#include <string>
#include <unordered_map>

class Solution {
public:
    int longestSubstring(std::string s, int k) {
        int ans = 0;
        std::unordered_map<char, int> mp;
        for (int i = 0; i < s.size(); ++i) {
            mp[s[i]]++;
        }

        int l=0;
        while (l<s.size() && mp[s[l]]>=k) l++;
        if (l==s.size()) return s.size();

        int left = longestSubstring(s.substr(0, l), k);
        int right = longestSubstring(s.substr(l+1), k);
        return std::max(left, right);
    }
};
