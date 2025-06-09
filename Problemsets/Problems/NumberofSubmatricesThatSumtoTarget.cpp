#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int subarraySum(vector<int> &nums, int target) {
        int cnt = 0, sum = 0;
        unordered_map<int, int> prefix;
        prefix[0] = 1;
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            if (prefix.find(sum-target) != prefix.end()) {
                cnt += prefix[sum-target];
            }
            prefix[sum]++;
        }
        return cnt;
    }
        
    int numSubmatrixSumTarget(vector<vector<int>>& matrix, int target) {
        int cnt = 0;
        int n = matrix.size(), m = matrix[0].size();
        for (int left = 0; left < m; left++) {
            vector<int> rowSum(n, 0);
            for (int right = left; right < m; right++) {
                for (int i = 0; i < n; i++) {
                    rowSum[i] += matrix[i][right];
                }
                cnt += subarraySum(rowSum, target);
            }
        }
        return cnt;
    }
};
