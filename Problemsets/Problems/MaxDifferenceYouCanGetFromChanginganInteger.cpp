#include <string>

using namespace std;

class Solution {
public:
    int maxDiff(int num) {
        string mx = to_string(num), mn = to_string(num);

        int j = 0;
        while (j < mx.size() && mx[j] == '9') j++;
        if (j < mx.size()) {
            char toReplace = mx[j];

            for (char &c : mx) {
                if (c == toReplace) c = '9';
            }
        }

        for (int i = 0; i < mn.size(); i++) {
            if (i == 0) {
                if (mn[0] != '1') {
                    char toReplace = mn[0];
                    for (char &c : mn) {
                        if (c == toReplace) c = '1';
                    }
                    break;
                }
            } else {
                if (mn[i] != '0' && mn[i] != mn[0]) {
                    char toReplace = mn[i];
                    for (char &c : mn) {
                        if (c == toReplace) c = '0';
                    }
                    break;
                }
            }

        }

        return stoi(mx) - stoi(mn);
    }
};

