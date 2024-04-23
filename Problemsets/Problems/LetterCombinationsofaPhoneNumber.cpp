#include <string>
#include <vector>
#include <functional>
#include <unordered_map>

class Solution {
public:
    std::vector<std::string> letterCombinations(std::string digits) {
        std::unordered_map<char, std::string> phone = {
            {'2', "abc"},
            {'3', "def"},
            {'4', "ghi"},
            {'5', "jkl"},
            {'6', "mno"},
            {'7', "pqrs"},
            {'8', "tuv"},
            {'9', "wxyz"}
        };

        std::vector<std::string> result;
        if (digits.empty()) return result;

        std::function<void(int, std::string)> backtrack = [&](int index, std::string current) {
            if (index == digits.size()) {
                result.push_back(current);
                return;
            }
            for (char c : phone[digits[index]]) {
                current.push_back(c);
                backtrack(index + 1, current);
                current.pop_back();
            }
        };
        backtrack(0, "");
        return result;
    }
};
