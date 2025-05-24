#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> res = { {}, {} };
        unordered_map<int, int> m1, m2;
        for (auto &x : nums1) m1[x] = 1;
        for (auto &x : nums2) m2[x] = 1;
        for (auto &p : m1) {
            if (m2[p.first] == 0) {
                res[0].push_back(p.first);
            }
        }
        for (auto &p : m2) {
            if (m1[p.first] == 0) {
                res[1].push_back(p.first);
            }
        }
        return res;
    }
};
