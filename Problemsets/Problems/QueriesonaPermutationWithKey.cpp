#include <vector>
#include <numeric>

using namespace std;

class Solution {
public:
    vector<int> processQueries(vector<int>& queries, int m) {
        vector<int> res(queries.size());
        vector<int> perm(m);
        iota(perm.begin(), perm.end(), 1);
        for (int i = 0; i < queries.size(); i++) {
            for (int j = 0; j < m; j++) {
                if (queries[i] == perm[j]) {
                    res[i] = j;
                    for (int k = j; k > 0; k--) {
                        swap(perm[k], perm[k - 1]);
                    }
                    break;
                }
            }
        }
        return res;
    }
};
