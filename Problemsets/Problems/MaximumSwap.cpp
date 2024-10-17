#include <algorithm>
#include <string>

class Solution {
public:
    int maximumSwap(int num) {
        std::string numStr = std::to_string(num);
        std::string maxStr = numStr;
        for (int i = 0; i < numStr.size(); i++) {
            for (int j = i+1; j < numStr.size(); j++) {
                std::swap(numStr[i], numStr[j]);
                if (numStr > maxStr) {
                    maxStr = numStr;
                }
                std::swap(numStr[i], numStr[j]);
            }
        }
        return std::stoi(maxStr);
    }
};
