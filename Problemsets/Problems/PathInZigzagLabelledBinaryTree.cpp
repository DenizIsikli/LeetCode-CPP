#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> pathInZigZagTree(int label) {
        int level=0;
        for(int i=1;i<=label;i*=2,level++);
        vector<int>res(level);
        for(int i=level-1;i>=0;i--){
            res[i]=label;
            int start=1<<i,end=(1<<(i+1))-1;
            label=(start+end-label)/2;
        }
        return res;
    }
};
