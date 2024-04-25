#include <string>
#include <vector>

class Solution {
public:
    std::vector<std::string> getLongestSubsequence(std::vector<std::string>& words, std::vector<int>& groups) {
        std::vector<std::string> ans;
        ans.push_back(words[0]);
        int prev = groups[0];
        for (int i = 1; i < words.size(); ++i) {
            if (groups[i] != prev) {
                ans.push_back(words[i]);
                prev=groups[i];
            }
        }
        return ans;
    }
};
