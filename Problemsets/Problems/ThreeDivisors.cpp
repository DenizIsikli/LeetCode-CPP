#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isThree(int n) {
        int cnt=0;
        for(int i=1;i<=sqrt(n);i++){
            if(n%i==0){
                if(i*i==n)cnt++;
                else cnt+=2;
            }
        }
        return cnt==3;
    }
};
