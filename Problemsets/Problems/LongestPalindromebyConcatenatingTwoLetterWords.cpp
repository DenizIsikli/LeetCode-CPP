#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int longestPalindrome(vector<string>& words) {
    unordered_map<string, int> fq;
        for (auto &word : words) fq[word]++;

        int res = 0;
        bool hasDouble = false;

        for (auto &[word, cnt] : fq) {
            string rev = string{word[1], word[0]};
            if (word == rev) {
                res += (cnt/2)*4;
                if (cnt&1) hasDouble = true;
            } else if (fq.count(rev)) {
                int pairs = min(cnt, fq[rev]);
                res += pairs*4;
                fq[rev] = 0;
            }
        }

        if (hasDouble) res += 2;
        return res;
    }
};
