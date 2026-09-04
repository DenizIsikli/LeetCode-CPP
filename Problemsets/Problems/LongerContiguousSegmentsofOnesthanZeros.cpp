#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool checkZeroOnes(string s) {
        int zl=0,ol=0,cnt=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1'){
                cnt++;
                ol=max(ol,cnt);
            }else{
                cnt=0;
            }
        }
        cnt=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='0'){
                cnt++;
                zl=max(zl,cnt);
            }else{
                cnt=0;
            }
        }
        return ol>zl;
    }
};
