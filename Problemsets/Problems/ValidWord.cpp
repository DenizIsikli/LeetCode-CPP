#include <string>

class Solution {
public:
    bool isValid(std::string word) {
        if (word.size() < 3) return false;
        auto isUpper = [](char c) { return c >= 'A' && c <= 'Z'; };
        auto isDigit = [](char c) { return c >= '0' && c <= '9'; };
        auto isVowel = [](char c) { c = tolower(c); return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'; };
        auto isConsonant = [](char c) { c = tolower(c); return isalpha(c) && !(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'); };

        bool hasUpper = false;
        bool hasDigit = false;
        bool hasVowel = false;
        bool hasConsonant = false;

        for (char c : word) {
            if (isUpper(c)) hasUpper = true;
            if (isDigit(c)) hasDigit = true;
            if (isVowel(c)) hasVowel = true;
            if (isConsonant(c)) hasConsonant = true;

            if (!((isDigit(c) || isUpper(c) || isVowel(c)) || isConsonant(c))) {
                return false;
            }
        }
        return (hasDigit || hasUpper) && hasVowel && hasConsonant;
    }
};
