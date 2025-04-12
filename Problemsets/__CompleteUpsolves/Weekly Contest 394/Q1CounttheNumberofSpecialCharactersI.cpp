#include <string>
#include <set>
#include <algorithm>

class Solution {
public:
    int numberOfSpecialChars(std::string word) {
        std::set<char> specialChars;
        for (char ch : word) {
            if (isalpha(ch) && (std::find(word.begin(), word.end(), tolower(ch)) != word.end()) &&
                (std::find(word.begin(), word.end(), toupper(ch)) != word.end())) {
                specialChars.insert(tolower(ch));
            }
        }

        return specialChars.size();
    }
};