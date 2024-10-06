#include <string>
#include <vector>

class Solution {
private:
    std::vector<std::string> split(std::string s) {
        s += " ";
        std::vector<std::string> res;
        std::string word = "";
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == ' ') {
                res.push_back(word);
                word = "";
            } else {
                word += s[i];
            }
        }
        return res;
    }

public:
    bool areSentencesSimilar(std::string sentence1, std::string sentence2) {
        if (sentence1.size() < sentence2.size()) {
            std::swap(sentence1, sentence2);
        }

        std::vector<std::string> words1 = split(sentence1);
        std::vector<std::string> words2 = split(sentence2);

        int l = 0;
        for (int i = 0; i < words2.size(); i++) {
            if (words1[i] == words2[i]) {
                l++;
            } else {
                break;
            }
        }
        
        int idx = words1.size()-1, r = words2.size();
        for (int i = words2.size()-1; i >= 0; i--) {
            if (words2[i] == words1[idx]) {
                idx--;
                r = i;
            } else {
                break;
            }
        }

        return r <= l;
    }
};
