#include <string>
#include <numeric>

class Solution {
public:
    std::string fractionAddition(std::string expression) {
        int n = expression.size();
        int numerator = 0, denominator = 1;
        int i = 0;
        int res = 0;

        while (i < n) {
            int sign = 1;
            if (expression[i] == '+' || expression[i] == '-') {
                if (expression[i] == '-') sign = -1;
                i++;
            }

            int num = 0;
            while (i < n && isdigit(expression[i])) {
                num = num*10+(expression[i]-'0');
                i++;
            }

            res += sign*num;

            i++;

            int den = 0;
            while (i < n && isdigit(expression[i])) {
                den = den*10+(expression[i]-'0');
                i++;
            }
            
            numerator = numerator*den + sign*denominator*num;
            denominator *= den;

            int gcd = std::gcd(numerator, denominator);
            numerator /= gcd;
            denominator /= gcd;
        }
        return std::to_string(numerator) + "/" + std::to_string(denominator);
    }
};
