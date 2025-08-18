#include <vector>

using namespace std;

class Solution {
public:
    vector<int> backtrack(vector<vector<int>>&graph,int node,vector<int>&pth,vector<vector<int>>&res){
        pth.push_back(node);
        if(node==graph.size()-1)res.push_back(pth);
        else{
            for(int i=0;i<graph[node].size();i++){
                backtrack(graph,graph[node][i],pth,res);
            }
        }
        pth.pop_back();
        return pth;
    }

    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>>res;
        vector<int>pth;
        backtrack(graph,0,pth,res);
        return res;
    }
};
