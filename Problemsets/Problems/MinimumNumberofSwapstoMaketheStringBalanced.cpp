#include <string>

class Solution {
public:
    int minSwaps(std::string s) {
        int sz = 0;
        for (auto c : s) {
            if (c == '[') sz++;
            else if (sz > 0) sz--;
        }
        return (sz+1)/2;
    }
};
