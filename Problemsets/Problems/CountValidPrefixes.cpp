#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countValidPrefixes(string s) {
        int cntZ=0,cntO=0;
        int ans=0;
        for(auto&c:s){
            if(c=='0')cntZ++;
            else cntO++;
            if(abs(cntZ-cntO)<=1)ans++;
        }
        return ans;
    }
};
