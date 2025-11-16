#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int>fq;
        for(auto&x:arr)fq[x]++;
        int mx=-1;
        for(auto&x:fq){
            if(x.first==x.second)mx=max(mx,x.first);
        }
        return mx;
    }
};
