#include <cstdlib>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(), piles.end());
        int turns = piles.size()/3;
        int cns = 0;
        for (int i = turns; i < piles.size(); i += 2) {
            cns += piles[i];
        }
        return cns;
    }
};
