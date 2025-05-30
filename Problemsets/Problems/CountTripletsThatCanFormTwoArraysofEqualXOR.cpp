#include <vector>

using namespace std;

class Solution {
public:
    int countTriplets(vector<int>& arr) {
        int n = arr.size();
        vector<int> pre(n+1,0);
        for(int i = 0; i < n; i++) {
            pre[i+1] = pre[i] ^ arr[i];
        }

        int res = 0;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (pre[i] == pre[j + 1]) {
                    res += (j - i);
                }
            }
        }

        return res;
    }
};
