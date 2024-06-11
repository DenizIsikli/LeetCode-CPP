#include <vector>
#include <map>
#include <algorithm>

class Solution {
public:
    std::vector<int> relativeSortArray(std::vector<int>& arr1, std::vector<int>& arr2) {
        std::map<int, int> freq;
        std::vector<int> ans;
        for (int i : arr1) ++freq[i];
        for (int i : arr2) {
            for (int j = 0; j < freq[i]; ++j) ans.push_back(i);
            freq[i] = 0;
        }
        for (auto& [key, value] : freq) {
            for (int i = 0; i < value; ++i) ans.push_back(key);
        }
        return ans;
    }
};
