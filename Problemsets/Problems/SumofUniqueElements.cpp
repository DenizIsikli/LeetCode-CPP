#include <unordered_map>
#include <vector>

using namespace std;

class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int, int> fq;       
        for (auto &x : nums) {
            fq[x]++;
        }

        int sum = 0;
        for (auto &[key, value] : fq) {
            if (value==1) sum+=key;
        }

        return sum;
    }
};
