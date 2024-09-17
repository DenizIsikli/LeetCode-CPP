#include <string>
#include <vector>
#include <map>

class Solution {
public:
    std::vector<std::string> uncommonFromSentences(std::string s1, std::string s2) {
        std::vector<std::string> res;
        std::map<std::string, int> mp;
        std::string word = "";

        for (int i = 0; i < s1.size(); i++) {
            if (s1[i] == ' ') {
                mp[word]++;
                word = "";
            } else {
                word+=s1[i];
            }
        }
        mp[word]++;
        word = "";

        for (int i = 0; i < s2.size(); i++) {
            if (s2[i] == ' ') {
                mp[word]++;
                word = "";
            } else {
                word+=s2[i];
            }
        }
        mp[word]++;
        
        for (auto it = mp.begin(); it != mp.end(); it++) {
            if (it->second == 1) {
                res.push_back(it->first);
            }
        }

        return res;
    }
};
