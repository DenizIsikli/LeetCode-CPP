#include <vector>

class Solution {
public:
    std::vector<int> findArray(std::vector<int>& pref) {
        int n = pref.size(), cur = pref[0];
        std::vector<int> result(n, cur);
        for (int i = 1; i < n; ++i) {
            result[i] = cur ^ pref[i], cur = pref[i];
        }
        return result;
    }
};
