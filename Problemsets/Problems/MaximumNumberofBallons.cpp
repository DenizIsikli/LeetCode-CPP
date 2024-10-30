#include <string>
#include <unordered_map>

class Solution {
public:
    int maxNumberOfBalloons(std::string text) {
        std::unordered_map<char, int> fq;
        for (char c : text) {
            fq[c]++;
        }
        int res = 0;
        while (fq['b'] > 0 && fq['a'] > 0 && fq['l'] > 1 && fq['o'] > 1 && fq['n'] > 0) {
            res++;
            fq['b']--;
            fq['a']--;
            fq['l'] -= 2;
            fq['o'] -= 2;
            fq['n']--;
        }
        return res;
    }
};
