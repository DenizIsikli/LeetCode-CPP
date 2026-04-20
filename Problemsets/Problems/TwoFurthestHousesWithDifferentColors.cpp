#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int ans=0;
        int end=colors.size()-1;
        while(colors[0]==colors[end])end--;
        ans=max(ans,end);
        int st=0;
        while(colors[st]==colors[colors.size()-1])st++;
        ans=max(ans,(int)colors.size()-1-st);
        return ans;
    }
};
