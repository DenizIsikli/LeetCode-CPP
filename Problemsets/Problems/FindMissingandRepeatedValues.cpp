#include <vector>

using namespace std;

class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int> fq(grid.size()*grid[0].size()+1, 0);
        vector<int> res;
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[i].size(); j++) {
                fq[grid[i][j]]++;
            }
        }

        int repeated=0, missing=0;
        for (int i = 1; i < fq.size(); i++) {
            if (fq[i] == 0) {
                missing = i;
            }
            if (fq[i] == 2) {
                repeated = i;
            }
        }
        res.push_back(repeated);
        res.push_back(missing);
        return res;
    }
};
