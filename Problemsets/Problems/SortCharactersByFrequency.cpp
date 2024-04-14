#include <string>
#include <unordered_map>
#include <algorithm>

class Solution {
public:
    std::string frequencySort(std::string s) {
        std::unordered_map<char, int> freq;
        for (char c : s) {
            ++freq[c];
        }
        std::sort(s.begin(), s.end(), [&](char a, char b) {
            if (freq[a] == freq[b]) {
                return a < b;
            }
            return freq[a] > freq[b];
        });
        return s;
    }
};
