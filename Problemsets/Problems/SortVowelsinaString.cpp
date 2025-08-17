#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    string sortVowels(string s) {
        string vow="";
        vector<char> vowV={'a', 'e', 'i', 'o', 'u'};
        for(char&c:s){
            if(find(vowV.begin(),vowV.end(),tolower(c))!=vowV.end())vow+=c;
        }
        sort(vow.begin(), vow.end());
        for(int i=0,j=0;i<s.size();i++){
            if(find(vowV.begin(),vowV.end(),tolower(s[i]))!=vowV.end()){
                s[i]=vow[j++];
            }
        }
        return s;
    }
};
