#include <string>
#include <vector>

class Solution {
public:
    int mostWordsFound(std::vector<std::string>& sentences) {
        int max = 0;
        int count = 1;
        for (int i = 0; i < sentences.size(); ++i) {
            for (int j = 0; j < sentences[i].size(); ++j) {
                if (sentences[i][j] == ' ') {
                    count++;
                }
            }
            max = std::max(max, count);
            count = 1;
        }
        return max;
    }
};
