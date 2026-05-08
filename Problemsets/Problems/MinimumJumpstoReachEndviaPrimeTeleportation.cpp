#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int minJumps(vector<int>& nums){
        auto isPrime=[&](int n){
            if(n<=1)return false;
            for(int i=2;i*i<=n;i++)if(n%i==0)return false;
            return true;
        };
        int n=nums.size(),mx=*max_element(nums.begin(),nums.end());
        vector<vector<int>>pos(mx+1);
        for(int i=0;i<n;i++)pos[nums[i]].push_back(i);
        queue<int>q;
        vector<int>dist(n,-1);
        unordered_set<int>used;
        q.push(0);
        dist[0]=0;
        while(!q.empty()){
            int i=q.front();
            q.pop();
            if(i==n-1)return dist[i];
            if(i>0&&dist[i-1]==-1){
                dist[i-1]=dist[i]+1;
                q.push(i-1);
            }
            if(i+1<n&&dist[i+1]==-1){
                dist[i+1]=dist[i]+1;
                q.push(i+1);
            }
            if(isPrime(nums[i])&&!used.count(nums[i])){
                used.insert(nums[i]);
                for(int m=nums[i];m<=mx;m+=nums[i]){
                    for(int j:pos[m]){
                        if(dist[j]==-1){
                            dist[j]=dist[i]+1;
                            q.push(j);
                        }
                    }
                    pos[m].clear();
                }
            }
        }
        return -1;
    }
};
