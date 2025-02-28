#include <string>

using namespace std;

class Solution {
public:
    bool checkString(string s) {
        bool seenB = false;
        for (auto &c : s) {
            if (c=='b') seenB=true;
            if (c=='a' && seenB) return false;
        }
        return true;
    }
};

// Other solution
// class Solution {
// public:
//     bool checkString(string s) {
//         int a=0, b=0;
//         for (int i = 0; i < s.size(); i++) {
//             if (s[i]=='a' && b==0) a++;
//             else if (s[i]=='a' && b>0) { return false; }
//             if (s[i]=='b') b++;
//         }
//         return true;
//     }
// };

