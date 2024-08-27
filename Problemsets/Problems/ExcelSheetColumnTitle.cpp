#include <string>

class Solution {
public:
    std::string convertToTitle(int columnNumber) {
        std::string result;
        while (columnNumber > 0) {
            columnNumber--;
            result.insert(result.begin(), 'A' + columnNumber % 26);
            columnNumber /= 26;
        }
        return result;
    }
};
