#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {
        int mnL=INT_MAX,mnW=mnL,res=mnW;
        for(int i=0;i<landStartTime.size();i++){
            mnL=min(mnL,landStartTime[i]+landDuration[i]);
        }
        for(int i=0;i<waterStartTime.size();i++){
            mnW=min(mnW,waterStartTime[i]+waterDuration[i]);
            res=min(res,max(mnL,waterStartTime[i])+waterDuration[i]);
        }
        for(int i=0;i<landStartTime.size();i++){
            res=min(res,max(mnW,landStartTime[i])+landDuration[i]);
        }
        return res;
    }
};
