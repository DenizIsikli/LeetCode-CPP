#include <string>

using namespace std;

class Solution {
public:
    bool checkIfPangram(string sentence) {
        bool present[26] = {false};

        for (char c : sentence) {
            present[c - 'a'] = true;
        }

        for (bool isPresent : present) {
            if (!isPresent) {
                return false;
            }
        }

        return true;
    }
};
