#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        vector<bool>seen(rooms.size(),false);
        queue<int>q;
        q.push(0);
        seen[0]=true;
        while(!q.empty()){
            int top=q.front();
            q.pop();
            for(int i=0;i<rooms[top].size();i++){
                if(seen[rooms[top][i]]==false){
                    seen[rooms[top][i]]=true;
                    q.push(rooms[top][i]);
                }
            }
        }
        for(int i=0;i<seen.size();i++){
            if(seen[i]==false){
                return false;
            }
        }
        return true;
    }
};
