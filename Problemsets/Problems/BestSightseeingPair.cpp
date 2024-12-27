#include <vector>

class Solution {
public:
    int maxScoreSightseeingPair(std::vector<int>& values) {
        int res = 0;
        int prev = values[0];
        for (int i = 1; i < values.size(); i++) {
            res = std::max(res, prev+values[i]-i);
            prev = std::max(prev, values[i]+i);
        }
        return res;
    }
};

// TLE Solution:
// int maxScoreSightseeingPair(std::vector<int>& values) {
//     int res = 0;
//     for (int i = 0; i < values.size(); i++) {
//         for (int j = i+1; j < values.size(); j++) {
//             res = std::max(res, values[i]+values[j]+i-j);
//         }
//     }
//     return res; 
// }
