#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        map<int,vector<int>>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]].push_back(i);
        }
        int ans=0;
        for(auto&[num,idx]:mp){
            int tmp=0;
            if(idx.size()==3){
                int d=idx[1]-idx[0];
                bool flag=true;
                for(int i=2;i<idx.size();i++){
                    if(idx[i]-idx[i-1]!=d){
                        flag=false;
                        break;
                    }
                }
                if(flag)ans++;
            }
        }
        return ans;
    }
};
