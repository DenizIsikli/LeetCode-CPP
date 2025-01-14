#include <vector>

using namespace std;

class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n = A.size();
        vector<int> aFq(55, 0);
        vector<int> res(n, 0);
        int cnt = 0;

        for (int i = 0; i < n; i++) {
            aFq[A[i]]++;
            aFq[B[i]]++;

            if (aFq[A[i]] == 2) cnt++;
            if (A[i] != B[i] && aFq[B[i]] == 2) cnt++;

            res[i] = cnt;
        }

        return res;
    }
};
