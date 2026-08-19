#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int largestInteger(int num) {
        priority_queue<int>odd,even;
        int n=num;
        while(n>0){
            int d=n%10;
            if(d%2==0)even.push(d);
            else odd.push(d);
            n/=10;
        }
        string s=to_string(num);
        string ans;
        for(int i=0;i<s.size();i++){
            if((s[i]-'0')%2==0){
                ans+=char(even.top()+'0');
                even.pop();
            }
            else{
                ans+=char(odd.top()+'0');
                odd.pop();
            }
        }
        return stoi(ans);
    }
};
