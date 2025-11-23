#include <string>
#include <unordered_map>
#include <vector>
#include <algorithm>


using namespace std;

class Solution {
public:
    int minDeletion(string s, int k) {
        unordered_map<char,int>fq;
        for(char&c:s)fq[c]++;
        vector<int>freq;
        for(auto&it:fq)freq.push_back(it.second);
        sort(freq.begin(),freq.end(),greater<int>());
        int n=freq.size();
        if(n<=k)return 0;
        int ans=0;
        for(int i=k;i<n;i++)ans+=freq[i];
        return ans;
    }
};
