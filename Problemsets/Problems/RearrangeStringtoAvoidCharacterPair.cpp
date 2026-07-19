#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string rearrangeString(string s, char x, char y) {
        string xc="",yc="",oc="";
        for(char c:s){
            if(c==y)yc+=c;
            else if(c==x)xc+=c;
            else oc+=c;
        }
        return yc+oc+xc;
    }
};
