#include <map>
#include <string>

using namespace std;

class Solution {
public:
    int minMaxDifference(int num) {
        string s = to_string(num);
        char digitToMinimize = '0', digitToMaximize = '0';

        for (int i = 0; i < s.size(); i++) {
            if (s[i] >= '0' && s[i] < '9') {

                digitToMaximize = s[i];

                break;
            }
        }

        for (int i = 0; i < s.size(); i++) {
            if (s[i] >= '0') {
                digitToMinimize = s[i];
                break;
            }
        }

        string maximized = s, minimized = s;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == digitToMaximize) maximized[i] = '9';
            if (s[i] == digitToMinimize) minimized[i] = '0';
        }

        return stoi(maximized) - stoi(minimized);
    }
};
