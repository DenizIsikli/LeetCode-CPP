#include <string>
#include <algorithm>

class Solution {
public:
    std::string reversePrefix(std::string word, char ch) {
        int i = word.find(ch);
        if (i != -1) {
            std::reverse(word.begin(), word.begin() + i + 1);
        }
        return word;
    }
};
