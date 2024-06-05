#include <string>
#include <vector>
#include <unordered_map>

class Solution {
public:
    std::vector<std::string> commonChars(std::vector<std::string>& words) {
        std::vector<std::string> ans;

        for (char ch = 'a'; ch <= 'z'; ++ch) {
            int minCount = INT_MAX;

            for (std::string word : words) {
                int count = 0; 
                for (char c : word) {
                    if (c == ch) {
                        ++count;
                    }
                }
                minCount = std::min(minCount, count);
            }

            for (int i = 0; i < minCount; ++i) {
                ans.push_back(std::string(1, ch));
            }
        }
        return ans;
    }
};
