#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        vector<int>mlt;
        int x=k;
        for(int i=k;i<=111;i++){
            mlt.push_back(x);
            x+=k;
        }
        for(auto&x:mlt){
            if(find(nums.begin(),nums.end(),x)==nums.end()){
                return x;
            }
        }
        return -1;
    }
};

