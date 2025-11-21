#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<vector<int>> allCellsDistOrder(int rows, int cols, int rCenter, int cCenter) {
        vector<pair<int,pair<int,int>>> temp;
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                int dist = abs(rCenter-i)+abs(cCenter-j);
                temp.push_back({dist,{i,j}});
            }
        }
        sort(temp.begin(),temp.end());
        vector<vector<int>> ans;
        for(int i=0;i<temp.size();i++){
            int x=temp[i].second.first;
            int y=temp[i].second.second;

            ans.push_back({x,y});
        }
        return ans;
    }
};
