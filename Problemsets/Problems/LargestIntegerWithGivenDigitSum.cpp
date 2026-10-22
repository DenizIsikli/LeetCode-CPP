#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int largestInteger(int n, int s) {
        if(s==0)return 0;
        if(n*9<s)return -1;
        string ans="";
        for(int i=0;i<n;i++){
            if(s>=9){
                ans+='9';
                s-=9;
            }else{
                ans+=to_string(s);
                s=0;
            }
        }
        return stoi(ans);
    }
};
