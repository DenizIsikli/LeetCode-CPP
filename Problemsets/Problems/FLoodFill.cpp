#include <vector>
#include <queue>

using namespace std;

class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int orgColor = image[sr][sc];
        if (orgColor==color) return image;

        queue<pair<int, int>> q;
        q.push({sr,sc});
        image[sr][sc]=color;

        vector<pair<int, int>> dir = {{0,1}, {0,-1}, {1,0}, {-1,0}};

        while(!q.empty()) {
            auto &p = q.front();
            q.pop();

            for (auto &d : dir) {
                int x = p.first+d.first;
                int y = p.second+d.second;
                if (x>=0 && y>=0 && x<image.size() && y<image[0].size() && image[x][y]==orgColor) {
                    q.push({x,y});
                    image[x][y]=color;
                }
            }
        }
        return image;
    }
};

// DFS Approach
// void dfs(vector<vector<int>>& image, int sr, int sc, int color, int orgColor) {
//     if (sr<0 || sc<0 || sr>=image.size() || sc>=image[0].size() || image[sr][sc]!=orgColor) return;
//     image[sr][sc] = color;
//     dfs(image, sr+1, sc, color, orgColor);
//     dfs(image, sr-1, sc, color, orgColor);
//     dfs(image, sr, sc+1, color, orgColor);
//     dfs(image, sr, sc-1, color, orgColor);
// }
//
// vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
//     int orgColor = image[sr][sc];
//     if (orgColor==color) return image;
//     dfs(image, sr, sc, color, orgColor);
//     return image;
// }

