#include <vector>

class Solution {
public:
    int maximumPrimeDifference(std::vector<int>& nums) {
        auto isPrime = [](int num) {
            if (num <= 1) return false;
            if (num <= 3) return true;

            if (num % 2 == 0 || num % 3 == 0) return false;

            for (int i = 5; i * i <= num; i += 6)
                if (num % i == 0 || num % (i + 2) == 0)
                    return false;

            return true;
        };

        int firstPrimeIndex = -1, lastPrimeIndex = -1;
        for (int i = 0; i < nums.size(); ++i) {
            if (isPrime(nums[i])) {
                if (firstPrimeIndex == -1) firstPrimeIndex = i;
                lastPrimeIndex = i;
            }
        }
        if (firstPrimeIndex == -1 || firstPrimeIndex == lastPrimeIndex) return 0;

        return lastPrimeIndex - firstPrimeIndex;
    }
};
