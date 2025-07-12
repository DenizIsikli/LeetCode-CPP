#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        vector<int>fq(26,0);
        for(char&c:brokenLetters)fq[c-'a']++;
        int cnt=0,ans=0;
        for(int i=0;i<text.size();i++){
            if(text[i]==' '){
                if(cnt==0)ans++;
                cnt=0;
            }else if(fq[text[i]-'a']==1)cnt++;
        }
        if(cnt==0)ans++;
        return ans;
    }
};
