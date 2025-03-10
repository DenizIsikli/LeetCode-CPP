#include <string>
#include <unordered_map>

using namespace std;

class Solution {
public:
    bool isVowel(char c) {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }

    long long isLeastK(string &word, int k) {
        int n = word.size();
        long long ans = 0;
        int consonants = 0;
        int l = 0;
        unordered_map<int, int> vowelmp;
        
        for (int r = 0; r < n; r++) {
            if (isVowel(word[r])) {
                vowelmp[word[r]]++;
            } else {
                consonants++;
            }

            while (vowelmp.size()==5&&consonants>=k) {
                ans += n-r;
                if (isVowel(word[l])) {
                    vowelmp[word[l]]--;
                    if (vowelmp[word[l]] == 0) {
                        vowelmp.erase(word[l]);
                    }
                } else {
                    consonants--;
                }
                l++;
            }
        }

        return ans;
    }

    long long countOfSubstrings(string word, int k) {
        return isLeastK(word, k) - isLeastK(word, k+1);
    }
};
