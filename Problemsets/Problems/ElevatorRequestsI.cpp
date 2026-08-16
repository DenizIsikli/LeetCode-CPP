#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int elevatorRequests(int n, vector<int>& requests) {
        int ans=0,prev=0;
        for(auto&x:requests){
            ans+=abs(x-prev);
            prev=x;
        }
        return ans;
    }
};
