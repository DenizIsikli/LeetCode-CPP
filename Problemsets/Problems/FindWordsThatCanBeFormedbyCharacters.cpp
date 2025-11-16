#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        unordered_map<char,int>mp;
        int ans=0;
        for(auto&c:chars)mp[c]++;
        for(auto&word:words){
            unordered_map<char,int>temp;
            bool canForm=true;
            for(auto&c:word){
                temp[c]++;
                if(temp[c]>mp[c]){
                    canForm=false;
                    break;
                }
            }
            if(canForm)ans+=word.size();
        }
        return ans;
    }
};
