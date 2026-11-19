#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int fillCups(vector<int>& amount) {
        int mx=max({amount[0],amount[1],amount[2]});
        int sm=(amount[0]+amount[1]+amount[2]);
        return max(mx,(sm+1)/2);
    }
};
