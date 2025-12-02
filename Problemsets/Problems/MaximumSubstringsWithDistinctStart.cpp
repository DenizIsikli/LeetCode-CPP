#include <set>
#include <string>

using namespace std;

class Solution {
public:
    int maxDistinct(string s) {
        set<char>st;
        for(auto&c:s)st.insert(c);
        return st.size();
    }
};
