#include <map>
#include <vector>

using namespace std;

class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        map<pair<int, int>, int> fq; 
        int cnt = 0;
        for (auto &d : dominoes) {
            if (d[0]>d[1]) { swap(d[0], d[1]);}
            cnt+=fq[make_pair(d[0], d[1])]++;
        }
        return cnt;
    }
};
