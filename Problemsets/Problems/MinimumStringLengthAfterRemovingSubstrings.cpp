#include <string>
#include <stack>

class Solution {
public:
    int minLength(std::string s) {
        std::stack<char> st;
        for (int i = 0; i < s.size(); i++) {
            if (st.empty()) {
                st.push(s[i]);
                continue;
            }
            if (s[i] == 'B' && st.top() == 'A') {
                st.pop();
            } else if (s[i] == 'D' && st.top() == 'C') {
                st.pop();
            } else {
                st.push(s[i]);
            }
        }
        return st.size();
    }
};
