#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        int sz=s.size()%k;
        vector<string>res;
        int cnt=0;
        string tmp="";
        for(int i=0;i<s.size();i++){
            if(cnt==k){
                cnt=0;
                res.push_back(tmp);
                tmp="";
            }
            tmp.push_back(s[i]);
            cnt++;
        }
        if(!tmp.empty()){
            int fillAmount=k-tmp.size();
            for(int i=0;i<fillAmount;i++){
                tmp.push_back(fill);
            }
        }
        res.push_back(tmp);
        return res;
    }
};
