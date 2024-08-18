#include <queue>
#include <vector>
#include <unordered_set>

class Solution {
public:
    int nthUglyNumber(int n) {
        std::vector<int> primes = {2, 3, 5};
        std::priority_queue<long, std::vector<long>, std::greater<long>> uglyHeap;      
        std::unordered_set<long> visited;

        uglyHeap.push(1);
        visited.insert(1);

        long curr;
        for (int i = 0; i < n; ++i) {
            curr = uglyHeap.top();
            uglyHeap.pop();
            for (auto &prime : primes) {
                long newUgly = curr * prime;
                if (visited.find(newUgly) == visited.end()) {
                    uglyHeap.push(newUgly);
                    visited.insert(newUgly);
                }
            }
        }
        return (int) curr;
    }
};
