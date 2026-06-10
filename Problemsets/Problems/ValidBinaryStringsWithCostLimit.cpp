#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<string>ans;
    void solve(int n,int k,int idx,bool prev,string &cur){
        if(k<0)return;
        if(idx==n){ans.push_back(cur);return;}
        cur.push_back('0');
        solve(n,k,idx+1,false,cur);
        cur.pop_back();
        if(!prev){
            cur.push_back('1');
            solve(n,k-idx,idx+1,true,cur);
            cur.pop_back();
        }
    }
    vector<string> generateValidStrings(int n, int k) {
        string cur;
        solve(n,k,0,false,cur);
        return ans;
    }
};
