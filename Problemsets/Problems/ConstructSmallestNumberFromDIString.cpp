#include <string>

using namespace std;

class Solution {
public:
    string smallestNumber(string pattern) {
        string res = "";
        int n = pattern.size();
        int num = 1;
        int i = 0;

        while (i<=n) {
            int start = i;

            while(i<n && pattern[i]=='D') i++;

            for (int j=i; j>=start; j--) {
                res+=to_string(num+(j-start));
            }

            num+=(i-start)+1;
            i++;
        }
        return res;
    }
};
