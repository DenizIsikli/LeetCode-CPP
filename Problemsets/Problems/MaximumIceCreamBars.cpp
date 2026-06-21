#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxIceCream(std::vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        int ans=0;
        for(auto&c:costs){
            if(c<=coins){ans++;coins-=c;}
        }
        return ans;
    }
};
