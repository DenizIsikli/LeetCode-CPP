#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    string reverseVowels(string s) {
        string temp = "";
        vector<int> coords;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' ||
                s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U') {
                temp += s[i];
                coords.push_back(i);
            }
        }

        reverse(temp.begin(), temp.end());
        for (int i = 0; i < coords.size(); i++) {
            s[coords[i]] = temp[i];
        }

        return s;
    }
};
