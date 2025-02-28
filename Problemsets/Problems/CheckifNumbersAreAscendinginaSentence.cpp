#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    bool areNumbersAscending(string s) {
        vector<int> res;
        for (int i = 0; i < s.size(); i++) {
            if (isdigit(s[i])) {
                int num = 0;
                while (i<s.size()&&isdigit(s[i])) {
                    num = num*10 + (s[i]-'0');
                    i++;
                }
                res.push_back(num);
            }
        }
        for (int i = 1; i < res.size(); i++) {
            if (res[i] <= res[i-1]) return false;
        }
        return true; 
    }
};
