#include <string>
#include <algorithm>

class Solution {
public:
    bool isValid(std::string word) {
        if (word.size() < 3) return false;

        auto isVowel = [](char c) { c = tolower(c); return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'; };
        auto isConsonant = [](char c) { c = tolower(c); return isalpha(c) && !(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'); };
        auto isValidChar = [](char c) { return isdigit(c) || isalpha(c); };
        return std::all_of(word.begin(), word.end(), isValidChar) &&
               std::any_of(word.begin(), word.end(), isVowel) &&
               std::any_of(word.begin(), word.end(), isConsonant);
    }
};

