#include <vector>
#include <numeric>

class Solution {
public:
    int findTheWinner(int n, int k) {
        std::vector<int> friends(n);
        std::iota(friends.begin(), friends.end(), 1);
        int current_position = 0;
        
        while (n > 1) {
            current_position = (current_position + (k - 1)) % n;
            friends.erase(friends.begin() + current_position);
            n--;
        }
        return friends[0];
    }
};
