#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int robotSim(vector<int>&commands,vector<vector<int>>&obstacles){
        set<pair<int,int>>s;
        for(auto&o:obstacles)s.insert({o[0],o[1]});
        int x=0,y=0,dir=0,res=0;
        for(auto&cmd:commands){
            if(cmd==-1)dir=(dir+1)%4;
            else if(cmd==-2)dir=(dir+3)%4;
            else{
                for(int k=0;k<cmd;k++){
                    int nx=x,ny=y;
                    if(dir==0)ny++;
                    else if(dir==1)nx++;
                    else if(dir==2)ny--;
                    else nx--;
                    if(s.count({nx,ny}))break;
                    x=nx;y=ny;
                    res=max(res,x*x+y*y);
                }
            }
        }
        return res;
    }
};
