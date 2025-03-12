#include <vector>

using namespace std;

class Solution {
public:
    int xorOperation(int n, int start) {
        vector<int> temp;       
        for (int i = 0; i < n; i++) {
            temp.push_back(start + 2*i);
        }

        int res = 0;
        for (auto &x : temp) {
            res^=x;
        }

        return res;
    }
};
