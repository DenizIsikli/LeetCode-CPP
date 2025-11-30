#include <string>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int countVowelSubstrings(string word) {
        int ans=0;
        for(int i=0;i<word.size();i++){
            unordered_map<char,int>cnt;
            for(int j=i;j<word.size();j++){
                if(word[j]=='a'||word[j]=='e'||word[j]=='i'||word[j]=='o'||word[j]=='u') cnt[word[j]]++;
                else{
                    break;
                }
                if(cnt.size()>4&&cnt['a']&&cnt['e']&&cnt['i']&&cnt['o']&&cnt['u']){
                    ans++;
                }
            }
        }
        return ans;
    }
};
