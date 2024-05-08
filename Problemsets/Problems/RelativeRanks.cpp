#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>

class Solution {
public:
    std::vector<std::string> findRelativeRanks(std::vector<int>& score) {
        std::vector<int> sortedScore = score;
        std::sort(sortedScore.begin(), sortedScore.end(), std::greater<int>());

        std::unordered_map<int, std::string> rankMap;
        for (int i = 0; i < sortedScore.size(); i++) {
            if (i == 0) {
                rankMap[sortedScore[i]] = "Gold Medal";
            } else if (i == 1) {
                rankMap[sortedScore[i]] = "Silver Medal";
            } else if (i == 2) {
                rankMap[sortedScore[i]] = "Bronze Medal";
            } else {
                rankMap[sortedScore[i]] = std::to_string(i + 1);
            }
        }

        std::vector<std::string> result;
        for (int i = 0; i < score.size(); i++) {
            result.push_back(rankMap[score[i]]);
        }
        return result;
    }
};
