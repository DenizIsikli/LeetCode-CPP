#include <string>

using namespace std;

class Solution {
public:
    bool squareIsWhite(string coordinates) {
        int c = coordinates[0]-'a'+1;
        int r = coordinates[1]-'0';
        if (c%2==0) {
            if (r%2==1) return true;
            else return false;
        } else {
            if (r%2==0) return true;
            else return false;
        }
    }
};
