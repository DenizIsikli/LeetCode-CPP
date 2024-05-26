#include <vector>
#include <unordered_map>

class Solution {
public:
    int countPairs(std::vector<int>& deliciousness) {
        std::unordered_map<int, int> mp;
        int mod = 1e9+7;
        long long ans = 0;
        for (int d : deliciousness) {
            for (int i = 0; i < 22; ++i) {
                int pow = 1 << i;
                if (mp.count(pow - d)) {
                    ans += mp[pow - d];
                    ans %= mod;
                }
            }
            mp[d]++;
        }
        return ans;
    }
};
