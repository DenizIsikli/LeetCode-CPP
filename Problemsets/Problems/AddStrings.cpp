#include <string>
#include <algorithm>

class Solution {
public:
    std::string addStrings(std::string num1, std::string num2) {
        int n = num1.size(), m = num2.size();
        std::string ans = "";
        int carry = 0;

        int idx = std::max(n, m);
        for (int i = 0; i < idx; ++i) {
            int a = i < n ? num1[n - i - 1] - '0' : 0;
            int b = i < m ? num2[m - i - 1] - '0' : 0;

            int sum = a + b + carry;
            carry = sum / 10;
            sum %= 10;

            ans += std::to_string(sum);
        }

        if (carry) {
            ans += std::to_string(carry);
        }
        std::reverse(ans.begin(), ans.end());
        return ans;
    }
};
