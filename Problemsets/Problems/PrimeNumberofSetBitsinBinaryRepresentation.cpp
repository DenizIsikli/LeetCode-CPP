#include <iostream>

using namespace std;

class Solution {
    int BrianKernighan(int n) {
        int setBits = 0;
        while (n) {
            setBits+=(n&1);
            n=n>>1;
        }
        return setBits;
    }

    bool checkPrime(int n) {
        if (n==1) { return 0; }
        for (int i = 2; i <= sqrt(n); i++) {
            if ((n%i)==0) { return 0; }
        }
        return 1;
    }

public:
    int countPrimeSetBits(int left, int right) {
        int primeCount = 0;
        for (int i = left; i <= right; i++) {
            if (checkPrime(BrianKernighan(i))) primeCount++;
        }
        return primeCount;
    }
};
