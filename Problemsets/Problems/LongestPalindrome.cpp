#include <string>
#include <unordered_map>

class Solution {
public:
    int longestPalindrome(std::string s) {
        std::unordered_map<char, int> freq;
        for (char c : s) freq[c]++;
        int ans = 0;
        for (auto &[k, v] : freq) {
            if (v%2==0) ans += v;
            else ans += v-1;
        }
        return ans < s.size() ? ans+1 : ans;
    }
};
