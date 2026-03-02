#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minimumIndex(vector<int>& capacity, int itemSize) {
        int mn=INT_MAX;
        int idx=-1;
        int prev=INT_MAX;
        for(int i=0;i<capacity.size();i++){
            if(capacity[i]>=itemSize&&capacity[i]-itemSize<prev){
                prev=capacity[i]-itemSize;
                idx=i;
            }
        }
        return idx;
    }
};
