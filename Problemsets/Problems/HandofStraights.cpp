#include <vector>
#include <map>

class Solution {
public:
    bool isNStraightHand(std::vector<int>& hand, int groupSize) {
        if (hand.size()%groupSize!=0) return false;
        std::map<int, int> freq;
        for (auto card : hand) ++freq[card];

        for (auto it = freq.begin(); it != freq.end(); ++it) {
            if (it->second > 0) {
                int count = it->second;
                for (int i = 0; i < groupSize; ++i) {
                    if (freq[it->first+i] < count) return false;
                    freq[it->first+i] -= count;
                }
            }
        }
        return true;
    }
};
