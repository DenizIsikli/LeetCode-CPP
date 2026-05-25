#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool canReach(string s, int minJump, int maxJump) {
        int n=s.size();
        queue<int>q;
        vector<bool>vis(n+1,false);
        q.push(0);
        int r=0;
        while(!q.empty()){
            int idx=q.front();
            q.pop();
            if(idx==n-1)return true;
            for(int i=(int)(max(r,idx+minJump));i<=(int)(min(idx+maxJump,n-1));i++){
                if(vis[i]==0&&s[i]=='0'){
                    q.push(i);
                    vis[i]=1;
                }
            }
            r=max(r,idx+maxJump+1);
        }
        return false;
    }
};
