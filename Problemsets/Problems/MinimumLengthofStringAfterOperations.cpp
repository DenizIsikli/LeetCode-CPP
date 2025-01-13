#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    int minimumLength(string s) {
        vector<int> fq(26, 0);
        int res = 0;
        for (char c : s) {
            fq[c-'a']++;
        }

        for (int freq : fq) {
            if (freq == 0) continue;
            if (freq%2==0) res+=2;
            else res+=1;
        }

        return res;
    }
};
