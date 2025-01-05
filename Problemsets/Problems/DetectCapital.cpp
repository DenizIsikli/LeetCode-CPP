#include <string>

class Solution {
public:
    bool detectCapitalUse(std::string word) {
        if (word.size()==1) return true;
        if (islower(word[0])) {
            for (int i = 1; i < word.size(); i++) {
                if (isupper(word[i])) return false;
            } 
        } else {
            if (isupper(word[1])) {
                for (int i = 2; i < word.size(); i++) {
                    if (islower(word[i])) return false;
                }
            } else {
                for (int i = 1; i < word.size(); i++) {
                    if (isupper(word[i])) return false;
                }
            }
        }
        return true;
    }
};
