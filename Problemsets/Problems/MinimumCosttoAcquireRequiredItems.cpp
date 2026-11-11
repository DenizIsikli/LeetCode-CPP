#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
        long long ans=0;
        while(need1>0||need2>0){
            if(need1>0&&need2>0){
                ans+=min((long long)cost1+cost2,(long long)costBoth);
                need1--;need2--;
            }else if(need1>0){
                ans+=min(cost1,costBoth);
                need1--;
            }else{
                ans+=min(cost2,costBoth);
                need2--;
            }
        }
        return ans;
    }
};
