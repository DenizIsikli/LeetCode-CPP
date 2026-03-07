#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minFlips(string s) {
        int flip0=0,flip1=0,n=s.size();
        bool cur=true;
        for(auto&c:s){
            if(c-'0'!=cur)flip1++;
            cur=!cur;
        }
        int res=min(flip1,n-flip1);
        if(n%2){
            cur=false;
            for(int i=0;i<n-1;i++){
                if(s[i]-'0'!=cur)flip0++;
                else flip1--;
                cur=!cur;
                res=min(res,min(flip0+flip1,n-flip0-flip1));
            }
            return res;
        }
        return res;
    }
};
