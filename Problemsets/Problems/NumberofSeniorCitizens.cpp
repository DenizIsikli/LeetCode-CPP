#include <string>
#include <vector>

class Solution {
public:
    int countSeniors(std::vector<std::string>& details) {
        int cnt = 0;
        for (auto &info : details) {
            int age = stoi(info.substr(11, 2));
            if (age > 60) cnt++;
        }
        return cnt;
    }
};
