#include <set>
#include <string>

using namespace std;

class Solution {
public:
    int countGoodSubstrings(string s) {
        int ans=0;
        set<char>st;
        for(int i=2;i<s.size();i++){
            st.insert(s[i]),st.insert(s[i-1]),st.insert(s[i-2]);
            if(st.size()==3)ans++;
            st.clear();
        }
        return ans;
    }
};
