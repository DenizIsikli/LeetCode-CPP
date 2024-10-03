#include <vector>
#include <unordered_map>
#include <algorithm>

class Solution {
public:
    bool uniqueOccurrences(std::vector<int>& arr) {
        std::unordered_map<int, int> freq;
        for (int i = 0; i < arr.size(); i++) {
            freq[arr[i]]++;
        }

        std::vector<int> chk;
        for (auto [key, value] : freq) {
            chk.push_back(value);
        }

        std::sort(chk.begin(), chk.end());
        for (int i = 1; i < chk.size(); i++) {
            if (chk[i] == chk[i - 1]) {
                return false;
            }
        }
        return true;
    }
};
