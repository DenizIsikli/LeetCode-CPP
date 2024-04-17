#include <vector>

class Solution {
public:
    int differenceOfSums(int n, int m) {
        std::vector<int> divisible;
        std::vector<int> nonDivisible;

        for (int i = 1; i <= n; ++i) {
            if (i % m == 0) {
                divisible.push_back(i);
            } else {
                nonDivisible.push_back(i);
            }
        }

        int sumDivisible = 0;
        for (int i = 0; i < divisible.size(); ++i) {
            sumDivisible += divisible[i];
        }
        int sumNonDivisible = 0;
        for (int i = 0; i < nonDivisible.size(); ++i) {
            sumNonDivisible += nonDivisible[i];
        }

        return sumNonDivisible - sumDivisible;
    }
};
