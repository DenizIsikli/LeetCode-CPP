#include <string>
#include <vector>

class Solution {
public:
    std::vector<std::string> findOcurrences(std::string text, std::string first, std::string second) {
        std::stringstream ss(text);
        std::string word;
        std::vector<std::string> result;
        std::string prev = "";
        std::string curr = "";
        while (ss >> word) {
            if (prev == first && curr == second) {
                result.push_back(word);
            }
            prev = curr;
            curr = word;
        }
        return result;
    }
};
