#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    bool isVowel(char c) {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }

    int maxFreqSum(string s) {
        int freq[26] = {0};
        for (auto c : s) {
            if (isalpha(c)) {
                freq[tolower(c)-'a']++;
            }
        }

        int maxVowel = 0, maxConsonant = 0;
        for (int i = 0; i < 26; i++) {
            if (isVowel(i+'a')) {
                maxVowel = max(maxVowel, freq[i]);
            } else {
                maxConsonant = max(maxConsonant, freq[i]);
            }
        }

        return maxVowel+maxConsonant;
    }
};
