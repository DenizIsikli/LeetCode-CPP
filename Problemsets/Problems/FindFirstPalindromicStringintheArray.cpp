#include <stdatomic.h>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        auto isPalindrome = [](string s) {
            int i = 0;
            int j = s.size()-1;
            while (i < j) {
                if (s[i]!=s[j]) return false;
                i++;
                j--;
            }
            return true;
        };

        for (string word : words) {
            if (isPalindrome(word)) {
                return word;
            }
        }
        return "";
    }
};
