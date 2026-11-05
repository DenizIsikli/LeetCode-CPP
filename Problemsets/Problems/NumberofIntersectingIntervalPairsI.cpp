#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countIntersectingIntervals(vector<vector<int>>& intervals) {
        if(intervals.size()<=1)return 0;
        sort(intervals.begin(),intervals.end());
        int ans=0;
        for(int i=0;i<intervals.size();i++){
            for(int j=i+1;j<intervals.size();j++){
                if(intervals[i][1]>=intervals[j][0]){
                    ans++;
                }
                else break;
            }
        }
        return ans;
    }
};
