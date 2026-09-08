#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minimumMoves(string s) {
        int cnt=0,i=0;
        while(i<s.size()){
            if(s[i]=='O')i++;
            else{cnt++;i+=3;}
        }
        return cnt;
    }
};
