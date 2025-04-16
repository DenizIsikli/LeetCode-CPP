#include <unordered_map>
#include <vector>

using namespace std;

class Solution {
public:
    long long countGood(vector<int>& nums, int k) {
        unordered_map<int, int> fq;
        fq.reserve(nums.size());
        long long res=0, cnt=0;
        
        for (int r=0, l=0; r < nums.size(); r++) {
            const int x = nums[r];
            cnt += fq[x]++;
            while (cnt>=k) {
                res+=(nums.size()-r);
                cnt-=--fq[nums[l++]];
            }
        }
        return res;
    }
};

