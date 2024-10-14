#include <queue>
#include <vector>

class Solution {
public:
    long long maxKelements(std::vector<int>& nums, int k) {
        std::priority_queue<long long> pq;
        for (auto &num : nums) {
            pq.push(num);
        }

        long long res = 0;
        for (int i = 0; i < k; i++) {
            long long temp = pq.top();
            pq.pop();
            res += temp;
            pq.push((temp+2)/3);
        }
        return res;
    }
};
