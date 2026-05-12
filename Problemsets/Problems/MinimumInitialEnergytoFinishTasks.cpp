#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minimumEffort(vector<vector<int>>& tasks) {
        sort(tasks.begin(),tasks.end(),[](const vector<int>& a,const vector<int>& b){
            return (a[1]-a[0])>(b[1]-b[0]);
        });
        int energy=0,curenergy=0;
        for(auto&tsk:tasks){
            int act=tsk[0];
            int mn=tsk[1];
            if(curenergy<mn){
                energy+=mn-curenergy;
                curenergy=mn;
            }
            curenergy-=act;
        }
        return energy;
    }
};
