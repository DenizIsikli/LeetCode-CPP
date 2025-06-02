#include <vector>

using namespace std;

class Solution {
public:
    int candy(vector<int>& ratings) {
        int n = ratings.size();
        vector<int> cand(n, 1);
        for (int i = 1; i < n; i++) {
            if (ratings[i]>ratings[i-1]) cand[i] = cand[i-1]+1;
        }

        int cnt = 0;
        for (int i = n-1; i > 0; i--) {
            if (ratings[i-1] > ratings[i]) {
                cand[i-1] = max(cand[i]+1, cand[i-1]);
            }
            cnt+=cand[i-1];
        }

        return cnt+cand[n-1];
    }
};
