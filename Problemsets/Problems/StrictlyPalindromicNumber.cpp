#include <string>
#include <algorithm>

class Solution {
public:
    bool isStrictlyPalindromic(int n) {
        std::string binary, binaryReversed = binary;
        while (n>0) {
            binary += (n%2);
            n/=2;
        }
        std::reverse(binaryReversed.begin(), binaryReversed.end());
        return (binary == binaryReversed) ? (true) : (false);
    }
};
