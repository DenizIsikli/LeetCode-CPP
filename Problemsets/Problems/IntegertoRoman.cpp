#include <string>
#include <cmath>
#include <vector>

class Solution {
public:
    std::string intToRoman(int num) {
        std::string roman = "";
        std::vector<std::pair<int, std::string>> romanMap = {
            {1000, "M"},
            {900, "CM"},
            {500, "D"},
            {400, "CD"},
            {100, "C"},
            {90, "XC"},
            {50, "L"},
            {40, "XL"},
            {10, "X"},
            {9, "IX"},
            {5, "V"},
            {4, "IV"},
            {1, "I"}
        };

        for (auto& pair : romanMap) {
            while (num >= pair.first) {
                roman += pair.second;
                num -= pair.first;
            }
        }
        return roman;
    }
};
