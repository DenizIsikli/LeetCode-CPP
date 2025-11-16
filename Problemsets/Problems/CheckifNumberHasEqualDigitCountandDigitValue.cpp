#include <string>

using namespace std;

class Solution {
public:
    bool digitCount(string num) {
        int cnt[10]={0};
        for(char&c:num)cnt[c-'0']++;
        for(int i=0;i<num.size();i++){
            if(cnt[i]!=num[i]-'0') return false;
        }
        return true;
    }
};
