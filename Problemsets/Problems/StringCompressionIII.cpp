#include <string>

class Solution {
public:
    std::string compressedString(std::string word) {
        std::string ans = "";
        int count = 1;

        for (int i = 1; i < word.size(); ++i) {
            if (word[i-1] == word[i] && count < 9) {
                ++count;
            } else if (word[i-1] == word[i] && count == 9) {
                ans.push_back((count)+'0');
                ans.push_back(word[i-1]);
                count = 1;
            } else {
                ans.push_back((count)+'0');
                ans.push_back(word[i-1]);
                count = 1;
            }
        }
        ans.push_back((count)+'0');
        ans.push_back(word[word.size()-1]);
        return ans;
    }
};
