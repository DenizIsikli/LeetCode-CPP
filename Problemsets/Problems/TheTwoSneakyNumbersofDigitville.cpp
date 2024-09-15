#include <map>
#include <vector>

class Solution {
public:
    std::vector<int> getSneakyNumbers(std::vector<int>& nums) {
        std::map<int, int> fq;
        std::vector<int> res;
        for (int i = 0; i < nums.size(); i++) {
            fq[nums[i]]++;
        }
        for (auto &[key, value] : fq) {
            if (value >= 2) res.push_back(key);
        }
        return res;
    }
};
