#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int rotatedDigits(int n) {
        int ans=0;
        for(int i=1;i<=n;i++){
            int check=i;
            bool valid=true;
            bool changed=false;
            while(check>0&&valid){
                int dig=check%10;
                if(dig==3||dig==4||dig==7)valid=false;
                else if(dig==2||dig==5||dig==6||dig==9)changed=true;
                check/=10;
            }
            if(valid&&changed)ans++;
        }
        return ans;
    }
};
