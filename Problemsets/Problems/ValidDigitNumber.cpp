#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool validDigit(int n, int x) {
        string str=to_string(n);
        for(int i=0;i<str.length();i++){
            if(str[0]==(x+'0')) return false;
            else if(str[i]==(x+'0')) return true;
        }
        return false;
    }
};
