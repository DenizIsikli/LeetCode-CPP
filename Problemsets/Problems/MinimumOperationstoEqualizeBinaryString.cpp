#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minOperations(string s, int k) {
        int n=s.size();
        int z=0,o=0;
        for(char c:s){
            if(c=='0')z++;
            else o++;
        }
        if(z==0)return 0;
        if(z==k)return 1;
        if(k==1)return z;
        if(k>=n)return -1;
        for(int ans=2;ans<=n;ans++){
            int change=ans*k;
            if(change<z)continue;
            if((change-z)%2==1)continue;
            if(change==z)return ans;
            if((ans&1)==1&&(z+(ans-1)*n>=change))return ans;
            else if((ans&1)==0&&(z+(ans-2)*n+o*2>=change))return ans;
        }
        return -1;
    }
};
