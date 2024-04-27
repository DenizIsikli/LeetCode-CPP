#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
#include <string>
#include <queue>
#include <stack>
#include <cmath>
#include <unordered_map>
#include <unordered_set>

class Solution {
public:
    int numberOfStableArrays(int zeroCount, int oneCount, int limitRange) {
        const int MODULO = 1e9 + 7;
        std::vector<std::vector<std::vector<long long>>> stableArrayCount(oneCount + 1, std::vector<std::vector<long long>>(zeroCount + 1, std::vector<long long>(2, 0)));
        stableArrayCount[0][0][0] = stableArrayCount[0][0][1] = 1;

        for (int oneIdx = 0; oneIdx <= oneCount; ++oneIdx) {
            for (int zeroIdx = 0; zeroIdx <= zeroCount; ++zeroIdx) {
                for (int elemCount = 1; elemCount <= limitRange; ++elemCount) {
                    if (oneIdx - elemCount >= 0)
                        stableArrayCount[oneIdx][zeroIdx][1] = (stableArrayCount[oneIdx][zeroIdx][1] + stableArrayCount[oneIdx - elemCount][zeroIdx][0]) % MODULO;
                    if (zeroIdx - elemCount >= 0)
                        stableArrayCount[oneIdx][zeroIdx][0] = (stableArrayCount[oneIdx][zeroIdx][0] + stableArrayCount[oneIdx][zeroIdx - elemCount][1]) % MODULO;
                }
            }
        }
        return static_cast<int>((stableArrayCount[oneCount][zeroCount][0] + stableArrayCount[oneCount][zeroCount][1]) % MODULO);
    }
};