#include <string>
#include <stack>
#include <algorithm>

class Solution {
public:
    std::string reverseParentheses(std::string s) {
        std::stack<int> stack;

        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == '(') stack.push(i);
            else if (s[i] == ')') {
                std::reverse(s.begin()+stack.top(), s.begin()+i);
                stack.pop();
            }
        }
        s.erase(std::remove(s.begin(), s.end(), '('), s.end());
        s.erase(std::remove(s.begin(), s.end(), ')'), s.end());
        return s;
    }
};
