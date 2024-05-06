#include <string>
#include <algorithm>
#include <vector>

class Solution {
public:
    int minimumDeletions(std::string word, int k) {
        std::vector<int> freq(26, 0);
        int deleted = 0, ans = word.size();
        for (char c : word) ++freq[c-'a'];
        std::sort(freq.begin(), freq.end());
        for(int i = 0; i < freq.size(); ++i) {
            int res = deleted;
            for(int j = freq.size()-1; j > i; --j) {
                if (freq[j] - freq[i] <= k) break;
                res += freq[j] - freq[i] - k;
            }
            ans = std::min(ans, res);
            deleted += freq[i];
        }
        return ans;
    }
};
