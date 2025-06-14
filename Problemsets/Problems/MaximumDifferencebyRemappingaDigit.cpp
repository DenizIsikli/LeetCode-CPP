#include <map>
#include <string>

using namespace std;

class Solution {
public:
    int minMaxDifference(int num) {
        string s = to_string(num);
        char minNum = '0', maxNum = '0';

        for (int i = 0; i < s.size(); i++) {
            if (s[i] >= '0') {
                maxNum = s[i];
                break;
            }
        }

        for (int i = 0; i < s.size(); i++) {
            if (s[i] >= '0' && s[i] < '9') {
                minNum = s[i];
                break;
            }
        }

        string  maxi = s, mini = s;
        for (int i = 0; i < s.size(); i++) {
            if (s[i]==maxNum) maxi[i] = '0';
            if (s[i]==minNum) mini[i] = '9';
        }
        return stoi(mini) - stoi(maxi);
    }
};
