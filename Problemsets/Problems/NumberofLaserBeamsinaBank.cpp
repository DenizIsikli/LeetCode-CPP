#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        unordered_map<int, int> fq;
        for (int i = 0; i < bank.size(); ++i) {
            int cnt = 0;
            for (int j = 0; j < bank[i].size(); ++j) {
                if (bank[i][j] == '1') {
                    ++cnt;
                }
            }
            if (cnt > 0) {
                fq[i] = cnt;
            }
        }

        int cnt = 0;
        for (int i = 0; i < fq.size(); ++i) {
            if (fq[i] > 0) {
                for (int j = i + 1; j < fq.size(); j++) {
                    if (fq[j] > 0) {
                        cnt += fq[i] * fq[j];
                        break;
                    }
                }
            }
        }
        
        return cnt;
    }
};
