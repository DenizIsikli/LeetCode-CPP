#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        unordered_map<int, pair<int, int>> fq;
        vector<int> r(n, m), c(m, n);

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                fq[mat[i][j]] = { i, j };
            }
        }

        for (int i = 0; i < arr.size(); i++) {
            int val = arr[i];
            auto [row, col] = fq[val];

            if (--r[row] == 0 || --c[col] == 0) {
                return i;
            }
        }

        return -1;
    }
};
