#include <vector>

using namespace std;

class Solution {
public:
    bool isPrime(int n) {
        if (n < 2) {
            return false;
        }
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                return false;
            }
        }
        return true;
    }

    vector<int> closestPrimes(int left, int right) {
        vector<int> primes;
        for (int i = left; i <= right; i++) {
            if (isPrime(i)) {
                primes.push_back(i);
            }
        }

        int minDiff = INT_MAX;
        vector<int> res={-1,-1};
        for (int i = 1; i < primes.size(); i++) {
            if (primes[i]-primes[i-1]<minDiff) {
                minDiff=primes[i]-primes[i-1];
                res={primes[i-1], primes[i]}; 
            } 
        }
        return res;
    }
};
