#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int cnt = 0, sum = 0;
        unordered_map<int, int> prefix;
        prefix[0] = 1;
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            if (prefix.find(sum-k) != prefix.end()) {
                cnt += prefix[sum-k];
            }
            prefix[sum]++;
        }
        return cnt;
    }
};
