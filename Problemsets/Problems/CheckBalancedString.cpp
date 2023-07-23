#include <string>

using namespace std;

class Solution {
public:
    bool isBalanced(string num) {
        int sumEven=0, sumOdd=0;       
        for (int i = 0; i < num.size(); i++) {
            if (i&1) sumOdd+=num[i]-'0';
            else sumEven+=num[i]-'0';
        }
        return sumEven==sumOdd;
    }
};
