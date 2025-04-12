#include <vector>
#include <algorithm>


class Solution {
public:
    double minimumAverage(std::vector<int>& nums) {
        std::vector<double> ans;
        std::sort(nums.begin(), nums.end());
        while(nums.size()) {
            double f = (double) nums.front();
            double b = (double) nums.back();
            nums.erase(nums.begin());
            nums.pop_back();
            double avg = (f+b)/2;
            ans.push_back(avg);
        }
        return *std::min_element(ans.begin(), ans.end());        
    }
};
