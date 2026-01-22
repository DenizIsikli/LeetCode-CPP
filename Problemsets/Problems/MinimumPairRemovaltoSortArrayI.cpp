#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minimumPairRemoval(vector<int>& nums) {
        auto minPairPos=[&](vector<int>v) -> int{
            int mnSm=INT_MAX;
            int pos=-1;
            for(int i=1;i<v.size();i++){
                if(v[i]+v[i-1]<mnSm){
                    mnSm=v[i]+v[i-1];
                    pos=i-1;
                }
            }
            return pos;
        };
        auto mergePair=[&](vector<int>&v,int pos) -> void{
            v[pos]+=v[pos+1];
            v.erase(v.begin()+pos+1);
        };
        int opt=0;
        while(!is_sorted(nums.begin(),nums.end())){
            mergePair(nums,minPairPos(nums));
            opt++;
        }
        return opt;
    }
};
