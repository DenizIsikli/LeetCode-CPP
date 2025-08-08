#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    char repeatedCharacter(string s) {
        int v[26]={0};
        for(char&c:s){
            if(v[c-'a']==1) {
                return c;
            }
            v[c-'a']++;
        }
        return ' ';
    }
};
