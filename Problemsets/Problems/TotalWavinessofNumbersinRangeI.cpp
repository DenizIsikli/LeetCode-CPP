#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int totalWaviness(int num1, int num2) {
        int res=0;
        for(int i=num1;i<=num2;++i){
            string s=to_string(i);
            bool flag=false;
            int cnt=0;
            for(int j=1;j<s.size()-1;++j){
                if(s[j]>s[j-1]&&s[j]>s[j+1])cnt++;
                else if(s[j]<s[j-1]&&s[j]<s[j+1])cnt++;
            }
            res+=cnt;
        }
        return res;
    }
};
