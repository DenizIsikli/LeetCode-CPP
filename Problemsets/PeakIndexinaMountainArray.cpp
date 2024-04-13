#include <vector>

class Solution {
public:
    int peakIndexInMountainArray(std::vector<int>& arr) {
        for (int i = 0; i < arr.size(); ++i) {
            if (arr[i] > arr[i+1]) {
                return i;
            }
        }
        return arr.size();
    }
};
