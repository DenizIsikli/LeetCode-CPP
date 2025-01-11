#include <string>
#include <unordered_map>

using namespace std;

class Solution {
public:
    bool canConstruct(string s, int k) {
        if (s.size() < k) return false;

        unordered_map<int, int> fq;
        for (char c : s) {
            fq[c-'a']++;
        }

        int oddCount = 0;
        for (auto &[key, value] : fq) {
            if (value%2!=0) oddCount++;
        }

        return oddCount <= k;
    }
};
