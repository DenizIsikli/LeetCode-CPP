#include <string>
#include <unordered_map>


class Solution {
public:
    int numberOfSpecialChars(std::string s) {
        std::unordered_map<char, int> lower_case;
        std::unordered_map<char, int> upper_case;
        int special_word = 0;

        for(int i=0; i < s.size(); i++) {
            if(islower(s[i])) lower_case[s[i]]=i;
        }

        for(int i=s.size()-1; i >= 0; i--) upper_case[s[i]]=i;

        for (auto c : s) {
            if (isupper(c) && lower_case.find(std::tolower(c)) != lower_case.end()) {
                if (upper_case[std::toupper(c)] > lower_case[std::tolower(c)]) {
                    special_word++;
                    lower_case.erase(std::tolower(c));
                }
            }
        }

        return special_word;
    }
};
