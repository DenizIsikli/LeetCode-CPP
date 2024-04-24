#include <string>

class Solution {
public:
    int maxRepeating(std::string sequence, std::string word) {
        int repeating = 0;
        std::string temp = word;

        while (sequence.find(temp) != std::string::npos) {
            repeating++;
            temp += word;
        }
        return repeating;
    }
};
