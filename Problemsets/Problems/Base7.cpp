#include <string>

using namespace std;

class Solution {
public:
    string res = "";
    char sign;

    string convertToBase7(int num) {
        if (num<0) { num*=-1; sign='n'; } 
        if (num==0) { return to_string(0); }
        while (num>0) {
            res.push_back('0'+(num%7));
            num/=7;
        }
        if (sign=='n') res.push_back('-');
        reverse(res.begin(), res.end());
        return res;
    }
};
