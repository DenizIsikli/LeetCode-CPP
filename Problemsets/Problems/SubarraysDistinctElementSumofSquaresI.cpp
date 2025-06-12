#include <unordered_map>
#include <vector>

using namespace std;

class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int n = nums.size();
        int res = 0;
        for (int i = 0; i < nums.size(); i++) {
            unordered_map<int, int> fq;
            for (int j = i; j < n; j++) {
                fq[nums[j]]++;
                res += fq.size()*fq.size();
            }
        }
        return res;
    }
};
