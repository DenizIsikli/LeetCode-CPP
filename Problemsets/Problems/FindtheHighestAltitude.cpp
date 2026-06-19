#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int mx=INT_MIN,cur=0;
        for (int i = 0; i < gain.size(); i++) {
            cur+=gain[i];
            mx=max(mx,cur);
        }
        return max(0,mx);
    }
};
