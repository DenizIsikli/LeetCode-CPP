class Solution {
public:
    int arrangeCoins(int n) {
        int res = 0;
        while (n >= res + 1) {
            ++res;
            n -= res;
        }
        return res;
    }
};
