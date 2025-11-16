#include <set>
#include <string>

using namespace std;

class Solution {
public:
    int minimizedStringLength(string s) {
        set<char>uniqueChars;
        for(char c:s){
            uniqueChars.insert(c);
        }
        return uniqueChars.size();
    }
};
