#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    string sortSentence(string s) {
        string res = "";
        vector<string> v(10);
        string tmp = "";
        for (int i = 0; i < s.size(); i++) {
            tmp+=s[i];
            if (s[i]>='1'&&s[i]<='9') {
                tmp.pop_back();
                v[s[i]-'0'] = tmp;
                tmp = "";
                i++;
            }
        }
        for (int i = 1; i < v.size(); i++) {
            if (v[i]!="") {
                res+=v[i]+' ';
            } 
        }
        res.pop_back();
        return res;
    }
};
