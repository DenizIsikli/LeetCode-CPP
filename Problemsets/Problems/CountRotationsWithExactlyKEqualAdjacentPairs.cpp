#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countRotations(string s, int k) {
        auto adjPairs=[&](string &s){
            int cnt=0;
            for(int i=0;i<s.size()-1;i++){
                if(s[i]==s[i+1]) cnt++;
            }
            return cnt;
        };
        int ans=0;
        for(int i=0;i<s.size();i++){
            ans+=adjPairs(s)==k;
            rotate(s.begin(),s.begin()+1,s.end());
        }
        return ans;
    }
};
