#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int n=nums.size();
        vector<array<int,3>>v;
        for(int i=0;i<n;i++){
            int s=0,x=nums[i];
            while(x){s+=x%10;x/=10;}
            v.push_back({s,nums[i],i});
        }
        sort(v.begin(),v.end());
        vector<bool>vis(n,false);
        int ans=0;
        for(int i=0;i<n;i++){
            if(vis[i]||v[i][2]==i)continue;
            int j=i,len=0;
            while(!vis[j]){vis[j]=true;j=v[j][2];len++;}
            ans+=len-1;
        }
        return ans;
    }
};
