#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

class Solution {
public:
    int maxRemoval(vector<int>& nums, vector<vector<int>>& queries) {
        sort(queries.begin(), queries.end());
        int n = nums.size();
        priority_queue<int> available;
        priority_queue<int, vector<int>, greater<int>> removed;

        int ans = 0;
        int j = 0;
        for (int i = 0; i < n; i++) {
            while (j < queries.size() && queries[j][0] == i) {
                available.push(queries[j][1]);
                j++;
            }

            nums[i] -= removed.size();
            while (nums[i] > 0 && !available.empty() && available.top() >= i) {
                removed.push(available.top());
                available.pop();
                nums[i]--;
                ans++;
            }

            if (nums[i] > 0) return -1;
            while (!removed.empty() && removed.top() == i) removed.pop();
        }

        return queries.size() - ans;
    }
};
