#include <vector>
#include <map>
#include <algorithm>

class Solution {
public:
    std::vector<int> arrayRankTransform(std::vector<int>& arr) {
        std::vector<int> res;
        std::vector<int> sortedArr(arr);
        std::sort(sortedArr.begin(), sortedArr.end());
        std::map<int, int> rankMap;
        int rank = 1;
        for (int i = 0; i < sortedArr.size(); i++) {
            if (rankMap.find(sortedArr[i]) == rankMap.end()) {
                rankMap[sortedArr[i]] = rank++;
            }
        }
        for (int i = 0; i < arr.size(); i++) {
            res.push_back(rankMap[arr[i]]);
        }
        return res;
    }
};
