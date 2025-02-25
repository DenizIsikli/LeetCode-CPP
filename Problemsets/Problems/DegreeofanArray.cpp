#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        if (nums.size()==1) return 1;
        unordered_map<int, int> fq;
        unordered_map<int, int> firstIndex;
        unordered_map<int, int> lastIndex;

        for (int i = 0; i < nums.size(); i++) {
            fq[nums[i]]++;
            if (firstIndex.find(nums[i])==firstIndex.end()) {
                firstIndex[nums[i]] = i;
            }

            lastIndex[nums[i]] = i;
        }

        int mx = INT_MIN;
        for (const auto &entry : fq) {
            if (entry.second>mx) {
                mx=entry.second;
            }
        }

        int minLen = INT_MAX;
        for (const auto &entry : fq) {
            if (entry.second==mx) {
                int len = lastIndex[entry.first]-firstIndex[entry.first]+1;
                minLen = min(minLen, len);
            }
        }

        return minLen;
    }
};
