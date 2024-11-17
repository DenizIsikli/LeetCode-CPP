#include <string>
#include <vector>

class Solution {
public:
    int isPrefixOfWord(std::string sentence, std::string searchWord) {
        std::vector<std::string> words;
        std::string word;
        for (int i = 0; i < sentence.size(); i++) {
            if (sentence[i] == ' ') {
                words.push_back(word);
                word = "";
            } else {
                word += sentence[i];
            }
        }

        words.push_back(word);
        for (int i = 0; i < words.size(); i++) {
            if (words[i].find(searchWord) == 0) {
                return i + 1;
            }
        }
        return -1;
    }
};
