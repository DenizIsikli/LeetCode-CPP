#include <vector>

using namespace std;

class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n = nums.size();
        vector<int> less, high, res(n);
        int cnt = 0;
        for (auto &x : nums) {
            if (x<pivot) less.push_back(x);
            else if (x==pivot) cnt++;
            else high.push_back(x);
        }

        int idx = 0;
        for (auto &x : less) res[idx++]=x;
        for (int i = 0; i < cnt; i++) res[idx++]=pivot;
        for (auto &x : high) res[idx++]=x;

        return res;
    }
};
