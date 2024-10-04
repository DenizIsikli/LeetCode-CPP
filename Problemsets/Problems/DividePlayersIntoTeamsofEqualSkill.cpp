#include <vector>
#include <numeric>
#include <algorithm>

class Solution {
public:
    long long dividePlayers(std::vector<int>& skill) {
        int n = skill.size();
        long long sum = std::accumulate(skill.begin(), skill.end(), 0LL);
        if (sum % (n/2) != 0) return -1;

        int ts = sum/(n/2);
        std::sort(skill.begin(), skill.end());
        long long res = 0;
        for (int i = 0; i < n/2; i++) {
            long long l = skill[i], r = skill[n-1-i];
            if (l+r != ts) return -1;
            res+=l*r;
        }
        return res;
    }
};
