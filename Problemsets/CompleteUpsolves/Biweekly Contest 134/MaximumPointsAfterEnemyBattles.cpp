#include <vector>
#include <algorithm>

class Solution {
public:
    long long maximumPoints(std::vector<int>& enemyEnergies, int currentEnergy) {
        long long points = 0, n = enemyEnergies.size(), j = n-1;
        std::sort(enemyEnergies.begin(), enemyEnergies.end());
        if (enemyEnergies[0] > currentEnergy) return 0;
        while (j >= 0) {
            if (enemyEnergies[0] <= currentEnergy) {
                points += currentEnergy/enemyEnergies[0];
                currentEnergy %= enemyEnergies[0];
            } else {
                currentEnergy += enemyEnergies[j];
                --j;
            }
        }
        return points;
    }
};
