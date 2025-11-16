#include <string>

using namespace std;

class Solution {
public:
    string stringHash(string s, int k) {
        string res;
        for(int i=0;i<s.size();i+=k){
            int hs=0;
            for(int j=0;j<k;j++){
                hs+=s[i+j]-'a';
            }
            hs%=26;
            res+=(char)('a'+hs);
        }
        return res;
    }
};
