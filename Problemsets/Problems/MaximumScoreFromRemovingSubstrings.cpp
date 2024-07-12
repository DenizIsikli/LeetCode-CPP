#include <stack>
#include <string>
#include <algorithm>

class Solution {
public:
    int maximumGain(std::string s, int x, int y) {
        std::string a = "ab", b = "ba";
        std::stack<char> st;
        int ans = 0;

        if (x < y) {
            std::swap(x, y);
            std::swap(a, b);
        }

        for (char c : s) {
            if (!st.empty() && st.top() == a[0] && c == a[1]) {
                ans += x;
                st.pop();
            } else {
                st.push(c);
            }
        }

        std::string t;
        while (!st.empty()) {
            t.push_back(st.top());
            st.pop();
        }

        std::reverse(t.begin(), t.end());

        for (char c : t) {
            if (!st.empty() && st.top() == b[0] && c == b[1]) {
                ans += y;
                st.pop();
            } else {
                st.push(c);
            }
        }

        return ans;
    }
};
