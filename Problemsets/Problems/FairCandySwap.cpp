#include <vector>

class Solution {
public:
    std::vector<int> fairCandySwap(std::vector<int>& aliceSizes, std::vector<int>& bobSizes) {
        int sumA = 0, sumB = 0; 
        for (int i = 0; i < aliceSizes.size(); i++) {
            sumA += aliceSizes[i];
        }
        for (int i = 0; i < bobSizes.size(); i++) {
            sumB += bobSizes[i];
        }
        int diff = (sumA-sumB)/2;
        for (int i = 0; i < aliceSizes.size(); i++) {
            for (int j = 0; j < bobSizes.size(); j++) {
                if (aliceSizes[i] - bobSizes[j] == diff) {
                    return {aliceSizes[i], bobSizes[j]};
                }
            }
        }
        return {};
    }
};
