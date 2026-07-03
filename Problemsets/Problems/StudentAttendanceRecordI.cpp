#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool checkRecord(string s) {
        int aCnt=0,lCnt=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='A'){
                aCnt++;
                if(aCnt>1) return false;
            }
            if(s[i]=='L'){
                lCnt++;
                if(lCnt>2) return false;
            }else{lCnt=0;}
        }
        return true;
    }
};
