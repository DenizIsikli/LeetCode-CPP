#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int numRabbits(vector<int>& answers) {
        unordered_map<int, int> fq;
        for (auto &x : answers) fq[x]++;
        int cnt = 0;       
        for (auto &[k, v] : fq) {
            int groupSize = k+1;
            int groups = (v+k)/groupSize;
            cnt += groups*groupSize;
        }
        return cnt;
    }
};
