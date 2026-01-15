#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int maximizeSquareHoleArea(int n, int m, vector<int>& hBars, vector<int>& vBars) {
        int mxH=1,mxV=1;
        sort(hBars.begin(),hBars.end());
        sort(vBars.begin(),vBars.end());
        int cnt=1;
        for(int i=1;i<hBars.size();i++){
            if(hBars[i]==hBars[i-1]+1)cnt++;
            else{
                mxH=max(mxH,cnt);
                cnt=1;
            }
        }
        mxH=max(mxH,cnt);
        cnt=1;
        for(int i=1;i<vBars.size();i++){
            if(vBars[i]==vBars[i-1]+1)cnt++;
            else{
                mxV=max(mxV,cnt);
                cnt=1;
            }
        }
        mxV=max(mxV,cnt);
        return (min(mxH,mxV)+1)*(min(mxH,mxV)+1);
    }
};
