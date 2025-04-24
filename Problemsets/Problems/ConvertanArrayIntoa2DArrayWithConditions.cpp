#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<vector<int>> res;
        unordered_map<int, int> fq;
        for (int n : nums) {
            fq[n]++;
        }
        
        int maxFreq = 0;
        for (auto [_, f] : fq) maxFreq = max(maxFreq, f);
        res.resize(maxFreq);

        for (auto [k, v] : fq) {
            for (int i = 0; i < v; i++) {
                res[i].push_back(k);
            }
        }

        for (auto &row : res) {
            sort(row.begin(), row.end());
        }

        return res;
    }
};
