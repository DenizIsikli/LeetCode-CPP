#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool checkString(string s) {
        int f=(s[0]=='b')?1:0;
        for(int i=1;i<s.size();i++){
            if(s[i]=='a'&&f==1)return false;
            if(s[i]=='b')f=1;
        }
        return true;
    }
};
