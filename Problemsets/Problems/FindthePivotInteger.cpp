using namespace std;

class Solution {
public:
    int pivotInteger(int n) {
        for (int i = 1; i <= n; i++) {
            int sumL=0, sumR=0;
            for (int j = 1; j <= i; j++) sumL += j;
            for (int j = i; j <= n; j++) sumR += j;
            if (sumL == sumR) return i;
        }
        return -1;
    }
};
