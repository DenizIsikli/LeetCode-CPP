#include <vector>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& numbers, int target) {
        std::vector<int> res;
        int n = numbers.size();
        int l=0, r=n-1;
        while (l<r) {
            if (numbers[l]+numbers[r]==target) {
                res.push_back(l+1);
                res.push_back(r+1);
                break;
            }
            else if (numbers[l]+numbers[r]>target) r--;
            else l++;
        }
        return res;
    }
};
