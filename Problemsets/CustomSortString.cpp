class Solution {
public:
    string customSortString(string order, string s) {
        std::string res;
        for (char c : order) {
            for (char k : s) {
                if (c == k) {
                    res += c;
                }
            }
        }

        for (char c : s) {
            if (order.find(c) == std::string::npos) {
                res += c;
            }
        }
        return res;
    }
};
