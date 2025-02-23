#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
        int pixelWidth=0, totalLines=1;
        for (int i = 0; i < s.size(); i++) {
            if (pixelWidth+widths[s[i]-'a']>100) {
                totalLines++;
                pixelWidth=widths[s[i]-'a'];
            } else {
                pixelWidth+=widths[s[i]-'a'];
            }
        }
        return {totalLines, pixelWidth};
    }
};
