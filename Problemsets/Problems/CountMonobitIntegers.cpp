#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countMonobit(int n) {
        int ans=0;
        for(int i=0;i<=n;i++){
            long long tmp=i;
            int sz=0,cnt=0;
            while(tmp){
                if(tmp&1)cnt++;
                sz++;
                tmp>>=1;
            }
            if(cnt==sz||cnt==0)ans++;
        }
        return ans;
    }
};
