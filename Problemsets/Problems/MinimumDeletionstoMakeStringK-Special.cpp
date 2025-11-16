#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int minimumDeletions(string word, int k) {
        vector<int>s(26,0);
        for(char c:word){
            s[c-'a']++;
        }
        sort(s.begin(),s.end());
        int del=0;
        int ans=word.size();
        for(int i=0;i<s.size();i++){
            int tmp=del;
            for(int j=s.size()-1;j>=i;j--){
                if(s[j]-s[i]<=k)break;
                tmp+=s[j]-s[i]-k;
            }
            ans=min(ans,tmp);
            del+=s[i];
        }
        return ans;
    }
};
