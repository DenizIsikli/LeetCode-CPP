#include <string>
#include <vector>
#include <unordered_set>

using namespace std;

class Solution {
public:
    int countPoints(string rings) {
        vector<string> fq(10, "");

        for (int i = 1; i < rings.size(); i += 2) {
            fq[rings[i] - '0'] += rings[i - 1];
        }

        unordered_set<char> ch;
        int cnt = 0;
        for (int i = 0; i < fq.size(); i++) {
            ch.insert(fq[i].begin(), fq[i].end());
            if (ch.size() == 3) {
                cnt++;
            }
            ch.clear();
        }
        
        return cnt;
    }
};
