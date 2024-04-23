#include <vector>

class Solution {
public:
    int timeRequiredToBuy(std::vector<int>& tickets, int k) {
        int total = 0;

        while(1) {
            for (int i = 0; i < tickets.size(); ++i) {
                if (tickets[i] > 0) {
                    tickets[i]--;
                    total++;
                }
                if (tickets[k] == 0) return total;
            }
        }
    }
};
