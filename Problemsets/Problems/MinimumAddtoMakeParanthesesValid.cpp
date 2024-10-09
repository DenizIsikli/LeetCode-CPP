#include <string>
#include <stack>

class Solution {
public:
    int minAddToMakeValid(std::string s) {
        std::stack<char> st;
        int cnt = 0;
        for (auto c : s) {
            if (c == '(') st.push(c);
            else {
                if (st.empty()) cnt++;
                else st.pop();
            }
        }
        return cnt+st.size();
    }
};
