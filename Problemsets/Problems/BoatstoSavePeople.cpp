#include <vector>
#include <algorithm>

class Solution {
public:
    int numRescueBoats(std::vector<int>& people, int limit) {
        int res = 0;
        std::sort(people.begin(), people.end());
        int l=0, r=people.size()-1;
        while(l<=r) {
            if(people[l]+people[r]<=limit) {
                l++;
            }
            r--;
            res++;
        }
        return res;
    }
};
