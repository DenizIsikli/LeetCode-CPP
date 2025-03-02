#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int sumOfDigit(int x) {
        int sum = 0;
        while (x) {
            sum+=x%10;
            x/=10;
        }
        return sum;
    }

    int countBalls(int lowLimit, int highLimit) {
        vector<int> res(46, 0);
        for (int i = lowLimit; i <= highLimit; i++) {
            res[sumOfDigit(i)]++;
        }
        return *max_element(res.begin(), res.end());
    }
};
