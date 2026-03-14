#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<string>hpy;
    void hpyString(string cur,string &chars,int n){
        if(cur.size()==n){
            hpy.push_back(cur);
            return;
        }
        for(char&c:chars){
            if(cur.empty()||c!=cur.back()){
                hpyString(cur+c,chars,n);
            }
        }
    }

    string getHappyString(int n, int k) {
        string chars="abc";
        hpyString("",chars,n);
        return (hpy.size()>=k?hpy[k-1]:"");
    }
};
