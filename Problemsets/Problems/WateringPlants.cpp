#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int res=0;
        int tmp=capacity;
        for(int i=0;i<plants.size()-1;i++){
            res++;
            tmp-=plants[i];
            if(tmp<plants[i+1]){
                res+=(i+1)*2;
                tmp=capacity;
            }
        }
        return res+1;
    }
};
