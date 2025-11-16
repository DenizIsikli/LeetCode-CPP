#include <set>
#include <vector>
#include <climits>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        set<int> res;
        vector<int> kIdx;
        for (int i = 0; i < nums.size(); i++) if (nums[i]==key) kIdx.push_back(i);
        for (int i = 0; i < nums.size(); i++) {
            int minVal = INT_MAX;
            for (int j = 0; j < kIdx.size(); j++) {
                if (abs(i-kIdx[j]) <= k) {
                    minVal = min(minVal, abs(i-kIdx[j]));
                    res.insert(i);
                }
            }
        }
        vector<int> result(res.begin(), res.end());
        return result;
    }
};
