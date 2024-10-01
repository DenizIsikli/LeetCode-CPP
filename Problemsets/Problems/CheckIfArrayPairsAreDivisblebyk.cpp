#include <vector>

class Solution {
public:
    bool canArrange(std::vector<int>& arr, int k) {
        std::vector<int> freq(k, 0);

        for (int num : arr) {
            int rem = ((num%k)+k)%k;
            freq[rem]++;
        }
        if (freq[0]%2 != 0) return false;
        for (int i = 1; i < k; ++i) {
            if (freq[i] != freq[k-i]) return false;
        }
        return true;
    }
};
