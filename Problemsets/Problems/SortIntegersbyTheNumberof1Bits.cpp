#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        unordered_map<int,int>popCnt;
        for(int i=0;i<arr.size();i++){
            popCnt[arr[i]]=__builtin_popcount(arr[i]);
        }
        sort(arr.begin(),arr.end(),[&](int a,int b){
            if(popCnt[a]==popCnt[b]) {
                return a<b;
            }
            return popCnt[a]<popCnt[b];
        });
        return arr;
    }
};
