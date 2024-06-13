#include <vector>
#include <algorithm>

class Solution {
public:
    int minMovesToSeat(std::vector<int>& seats, std::vector<int>& students) {
        int ans = 0;
        std::sort(seats.begin(), seats.end());
        std::sort(students.begin(), students.end());
        for (int i = 0; i < seats.size(); ++i) {
            ans += std::abs(seats[i]-students[i]);
        }
        return ans;
    }
};
