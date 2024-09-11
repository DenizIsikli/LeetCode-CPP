#include <bits/stdc++.h>

class Solution {
public:
    int minBitFlips(int start, int goal) {
        return std::bitset<32>(start^goal).count();
    }
};
