#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    bool hammingDistance(string &a, string &b) {
        if (a.size() != b.size()) { return false; }
        int count = 0;
        for (int i = 0; i < a.size(); ++i) {
            count += a[i] != b[i];
        }
        return count == 1;
    }

    vector<string> getWordsInLongestSubsequence(vector<string>& words, vector<int>& groups) {
        int n = groups.size();
        vector<int> dp(n, 1), parent(n, -1);
        int maxi = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < i; j++) {
                if (groups[i] != groups[j] && 
                    hammingDistance(words[i], words[j]) &&
                    dp[i] < dp[j]+1) {
                        dp[i] = dp[j] + 1;
                        parent[i] = j;
                }
            }
            maxi = max(maxi, dp[i]);
        }

        vector<string> res;
        for (int i = 0; i < n; i++) {
            if (maxi == dp[i]) {
                while (i != -1) {
                    res.push_back(words[i]);
                    i = parent[i];
                }
                break;
            }
        }
        reverse(res.begin(), res.end());
        return res;
    }
};
