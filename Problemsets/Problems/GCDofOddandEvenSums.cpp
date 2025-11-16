#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int sumOdd = n * n, sumEven = n * (n + 1);
        return __gcd(sumOdd, sumEven);
    }
};
