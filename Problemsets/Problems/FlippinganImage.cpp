#include <vector>
#include <algorithm>

class Solution {
public:
    std::vector<std::vector<int>> flipAndInvertImage(std::vector<std::vector<int>>& image) {
        for (int i = 0; i < image.size(); i++) {
            std::reverse(image[i].begin(), image[i].end());
            for (int j = 0; j < image[i].size(); j++) {
                image[i][j] = image[i][j] == 0 ? 1 : 0;
            }
        }
        return image;
    }
};
