#include <numeric>
#include <vector>

using namespace std;

class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int sum = accumulate(nums.begin(), nums.end(), 0); 
        int opt = 0;
        while (sum%k!=0) {
            sum--;
            opt++;
        }
        return opt;
    }
};
