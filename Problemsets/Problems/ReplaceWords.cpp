#include <string>
#include <vector>
#include <sstream>
#include <unordered_set>

class Solution {
public:
    std::string replaceWords(std::vector<std::string>& dictionary, std::string sentence) {
        std::string ans;
        std::istringstream iss(sentence);
        std::string word;
        std::unordered_set<std::string> set(dictionary.begin(), dictionary.end());

        while (iss >> word) {
            std::string prefix;
            for (int i = 0; i < word.size(); ++i) {
                prefix += word[i];
                if (set.count(prefix)) {
                    break;
                }
            }
            ans += prefix + " ";
        }
        ans.pop_back();
        return ans;
    }
};
