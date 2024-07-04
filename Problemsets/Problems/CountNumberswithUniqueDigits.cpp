#include <vector>

class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        int range = 1 << n;
        int count = 0;
        for (int i = 0; i < range; ++i) {
            int num = i;
            std::vector<int> freq(10, 0);
            bool isUnique = true;
            while (num) {
                int digit = num % 10;
                if (freq[digit] > 0) {
                    isUnique = false;
                    break;
                }
                freq[digit]++;
                num /= 10;
            }
            if (isUnique) {
                count++;
            }
        }
        return count;
    }
};
