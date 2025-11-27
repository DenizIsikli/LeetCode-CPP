#include <vector>

using namespace std;

class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        vector<int>res;
        vector<int>indegree(n,0);
        for(auto&edge:edges){
            indegree[edge[1]]++;
        }
        for(int i=0;i<n;i++){
            if(indegree[i]==0){
                res.push_back(i);
            }
        }
        return res;
    }
};
