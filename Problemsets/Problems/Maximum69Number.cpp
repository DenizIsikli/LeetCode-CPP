#include <string>

using namespace std;

class Solution {
public:
    int maximum69Number (int num) {
        string sNum = to_string(num);       
        for (int i = 0; i < sNum.size(); i++) {
            if (sNum[i]=='6') { sNum[i]='9'; break; }
        }
        int res = stoi(sNum);
        return res;
    }
};
