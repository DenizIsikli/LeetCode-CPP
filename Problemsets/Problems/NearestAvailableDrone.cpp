#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int nearestDrone(vector<vector<int>>& drones, vector<int>& target) {
        int mn=INT_MAX,ans=-1;
        for(int i=0;i<drones.size();i++){
            auto d=drones[i];
            int dist=abs(d[0]-target[0])+abs(d[1]-target[1]);
            if(d[2]>=dist){
                if(dist<mn){
                    mn=dist;
                    ans=i;
                }
            }
        }
        return ans;
    }
};
