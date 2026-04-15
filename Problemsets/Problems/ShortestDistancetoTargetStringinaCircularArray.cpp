#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int closestTarget(vector<string>& words, string target, int startIndex) {
        int ans=INT_MAX;
        for(int i=0;i<words.size();i++){
            if(words[i]==target){
                ans=min(ans,min(abs(i-startIndex),int(words.size())-abs(i-startIndex)));
            }
        }
        return ans==INT_MAX?-1:ans;
    }
};
