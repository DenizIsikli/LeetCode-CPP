#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int vowelStrings(vector<string>& words, int left, int right) {
        int ans=0;
        int n=words.size()-1;
        while(left<=right&&left<=n){
            int k=words[left].size()-1;
            if((words[left][0]=='a'||words[left][0]=='e'||words[left][0]=='i'||words[left][0]=='o'||words[left][0]=='u')&&(words[left][k]=='a'||words[left][k]=='e'||words[left][k]=='i'||words[left][k]=='o'||words[left][k]=='u')){
                ans++;
            }
            left++;
        }
        return ans;
    }
};
