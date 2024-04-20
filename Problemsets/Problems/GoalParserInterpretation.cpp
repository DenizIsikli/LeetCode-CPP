#include <string>

class Solution {
public:
    std::string interpret(std::string command) {
        std::string res;

        for (int i = 0; i < command.size(); ++i) {
            if (command[i] == '(' && command[i+1] == ')') {
                res.push_back('o');
                ++i;
            } else if (command[i] == '(' && command[i+1] == 'a') {
                res.push_back('a');
                res.push_back('l');
                i += 3;
            } else {
                res.push_back(command[i]);
            }
        }

        return res;
    }
};
