#include <string>
#include <vector>
#include <set>

class Solution {
public:
    int uniqueMorseRepresentations(std::vector<std::string>& words) {
        std::vector<std::string> morseCodes = {
            ".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", 
            "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", 
            "..-", "...-", ".--", "-..-", "-.--", "--.."
        }; 
        std::vector<std::string> ans;
        for (int i = 0; i < words.size(); i++) {
            std::vector<std::string> temp;
            std::string final;
            for (int j = 0; j < words[i].size(); j++) {
                temp.push_back(morseCodes[words[i][j] - 'a']);
            }
            for (const std::string &a : temp) {
                final+=a;
            }
            ans.push_back(final);
        }

        std::set<std::string> s(ans.begin(), ans.end());
        return s.size();
    }
};
