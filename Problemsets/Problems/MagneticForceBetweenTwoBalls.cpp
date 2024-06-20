#include <vector>
#include <algorithm>

class Solution {
public:
    int maxDistance(std::vector<int>& position, int m) {
        std::sort(position.begin(), position.end());
        int left = 1;
        int right = position.back()-position[0];
        while (left<right) {
            int mid = left+(right-left+1)/2;
            int count = 1;
            int prev = position[0];
            for (int i = 1; i < position.size(); ++i) {
                if (position[i]-prev>=mid) {
                    ++count;
                    prev = position[i];
                }
            }
            if (count>=m) left = mid;
            else right = mid-1;
        }
        return left;
    }
};
