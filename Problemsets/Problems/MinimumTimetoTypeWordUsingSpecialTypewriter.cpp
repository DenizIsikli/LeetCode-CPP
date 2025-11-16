#include <string>

using namespace std;

class Solution {
public:
    int minTimeToType(string word) {
        int t=0;
        char prev='a';
        for(char c:word){
            int diff=abs(c-prev);
            t+=min(diff,26-diff)+1;
            prev=c;
        }
        return t;
    }
};
