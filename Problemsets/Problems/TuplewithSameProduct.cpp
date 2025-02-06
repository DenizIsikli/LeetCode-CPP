#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        unordered_map<int, int> fq;
        int n = nums.size();
        int res = 0;
        for (int i = 0; i < n; i++) {
            for (int j = i+1; j < n; j++) {
                int prod = nums[i]*nums[j];
                res += 8*fq[prod];
                fq[prod]++;
            }
        }
        return res;
    }
};
