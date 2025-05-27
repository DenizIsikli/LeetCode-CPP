#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    vector<string> hpy;

    string getHappyString(int n, int k) {       
        string chars = "abc";
        generateHappyStrings("", n, chars);
        return k > hpy.size() ? "" : hpy[k - 1];
    }

    void generateHappyStrings(string current, int n, const string &chars) {
        if (current.size() == n) {
            hpy.push_back(current);
            return;
        }
        
        for (char c : chars) {
            if (current.empty() || current.back() != c) {
                generateHappyStrings(current + c, n, chars);
            }
        }
    }
};
