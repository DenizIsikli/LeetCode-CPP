#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    bool divideArray(vector<int>& nums) {
        unordered_map<int, int> fq;
        for (auto &x : nums) fq[x]++;
        for (auto &[key, val] : fq) {
            if (val%2!=0) {
                return false;
            }
        }
        return true;
    }
};
