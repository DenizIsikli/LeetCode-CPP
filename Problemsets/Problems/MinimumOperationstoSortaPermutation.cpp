#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        int pos=find(nums.begin(),nums.end(),0)-nums.begin();
        bool f=1;
        for(int i=pos;i<pos+n-1;i++){
            if(nums[i%n]>nums[(i+1)%n]){
                f=0;
                break;
            }
        }
        if(f){
            return min(pos,n-pos+2);
        }
        f=1;
        for(int i=pos;i>pos-n+1;i--){
            if(nums[(n+i)%n]>=nums[(n+i-1)%n]){
                f=0;
                break;
            }
        }
        return f?min(n-pos,pos+2):-1;
    }
};
