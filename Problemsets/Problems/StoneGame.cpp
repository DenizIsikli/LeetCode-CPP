#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool stoneGame(std::vector<int>& piles) {
        return (piles.size()%2==0?true:false);
    }
};
