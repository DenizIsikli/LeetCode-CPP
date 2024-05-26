#include <string>
#include <algorithm>

class Solution {
public:
    int magicalString(int n) {
        if (n<=3) return 1;
        int i = 2;
        std::string s = "122";

        while (s.size()<n) {
            if (s[i]=='1') {
                if (s[s.size()-1]=='2') s.push_back('1');
                else s.push_back('2');
            } else {
                if (s[s.size()-1]=='2') s+="11";
                else s+="22";
            }
            i++;
        }

        int cnt = std::count(s.begin(), s.begin()+n, '1');
        return cnt;
    }   
};
