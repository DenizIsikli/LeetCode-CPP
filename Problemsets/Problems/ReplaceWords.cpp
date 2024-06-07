#include <string>
#include <vector>
#include <sstream>

class Solution {
public:
    std::string replaceWords(std::vector<std::string>& dictionary, std::string sentence) {
        std::istringstream iss(sentence);
        std::string word;
        std::vector<std::string> words;

        while (iss >> word) {
            for (const std::string &temp : dictionary) {
                if (word.find(temp)==0) {
                    word = temp;
                    break;
                }
            }
            words.push_back(word);
        }

        std::ostringstream oss;
        for (size_t i=0; i<words.size(); ++i) {
            if (i>0) oss << " ";
            oss << words[i];
        }
        return oss.str();
    }
};
