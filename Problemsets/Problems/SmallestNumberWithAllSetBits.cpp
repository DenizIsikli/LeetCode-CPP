const int INT_MAX = 2147483647;

using namespace std;

class Solution {
public:
    bool isAllBitsSet(int n) {
        while (n) {
            if ((n & 1) == 0) return false;
            n >>= 1;
        }
        return true;
    }

    int smallestNumber(int n) {
        for (int i = n; i < INT_MAX; i++) {
            if (isAllBitsSet(i)) return i;
        }
        return -1;
    }
};
