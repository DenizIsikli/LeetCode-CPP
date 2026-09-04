#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int divisorSubstrings(int num, int k) {
        string s=to_string(num);
        int ans=0;
        for(int i=0;i<=s.size()-k;i++){
            int x=stoi(s.substr(i,k));
            if(x!=0&&num%x==0)ans++;
        }
        return ans;
    }
};
