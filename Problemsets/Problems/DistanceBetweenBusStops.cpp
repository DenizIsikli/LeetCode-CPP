#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {
        int mn=INT_MAX;
        int fw=0,bw=0;
        if(start>destination)swap(start,destination);
        for(int i=start;i<destination;i++){
            fw+=distance[i];
        }
        for(int i=0;i<distance.size();i++){
            if(i>=start&&i<destination) continue;
            bw+=distance[i];
        }
        return min(fw,bw);
    }
};
