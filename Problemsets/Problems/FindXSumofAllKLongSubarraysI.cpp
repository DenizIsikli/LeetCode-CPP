#include <map>
#include <queue>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> findXSum(vector<int>& nums, int k, int x) {
        vector<int> res;
        for (int i = 0; i < nums.size()-(k-1); i++) {
            map<int, int> fq;
            for (int j = i; j < i+k; ++j) {
                fq[nums[j]]++;
            }
            priority_queue<pair<int, int>> pq;
            for (auto &p : fq) {
                pq.push({p.second, p.first});
            }

            int sum = 0;
            for (int i = 0; i < x && !pq.empty(); i++) {
                sum+=pq.top().second*pq.top().first;
                pq.pop();
            }
            res.push_back(sum);
        }
        return res;
    }
};
