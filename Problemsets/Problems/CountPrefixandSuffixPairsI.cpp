#include <string>
#include <vector>

class Solution {
public:
    int countPrefixSuffixPairs(std::vector<std::string>& words) {
        int cnt = 0;
        for (int i = 0; i < words.size(); i++) {
            for (int j = i+1; j < words.size(); j++) {
                if (words[i].size()>words[j].size()) continue;
                if (words[j].substr(0, words[i].size()) == words[i] && words[j].substr(words[j].size()-words[i].size()) == words[i]) cnt++;
            }
        } 
        return cnt; 
    }
};
