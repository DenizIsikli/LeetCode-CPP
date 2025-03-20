#include <string>

using namespace std;

class Solution {
public:
    int countDigits(int num) {
        int cnt = 0;
        string s = to_string(num);
        for (char c : s) {
            int digit = c - '0';
            if (digit != 0 && num % digit == 0) {
                cnt++;
            }
        }
        return cnt;
    }
};
