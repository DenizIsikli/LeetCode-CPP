#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int binaryGap(int n) {
        vector<int> a;
        while (n>0) {
            int tmp = n%2;
            a.push_back(tmp);
            n/=2;
        }

        reverse(a.begin(), a.end());

        int res = 0, size = a.size();
        int idx = -1;
        for (int i=0; i<size; i++) {
            if (a[i] == 1) {
                if (idx != -1) {
                    res = max(res, i-idx);
                }
                idx = i;
            }
        }
        
        return res;
    }
};
