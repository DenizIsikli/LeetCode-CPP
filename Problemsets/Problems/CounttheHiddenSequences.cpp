#include <vector>

using namespace std;

class Solution {
public:
    int numberOfArrays(vector<int>& differences, int lower, int upper) {
        long sum=0, minV=0, maxV=0;
        for (int &x : differences) {
            sum += x;
            minV = min(minV, sum);
            maxV = max(maxV, sum);
        }
        return max(0L, upper-lower-maxV+minV+1);
    }
};
