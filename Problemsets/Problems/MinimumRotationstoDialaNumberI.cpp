#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minRotations(string s) {
        int ans=0,prev=0;
        for(char c:s){
            int cur=c-'0';
            ans+=min(abs(cur-prev),10-abs(cur-prev));
            prev=cur;
        }
        return ans;
    }
};
