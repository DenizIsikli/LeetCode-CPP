#include <string>
#include <queue>

class Solution {
public:
    std::string longestDiverseString(int a, int b, int c) {
        std::priority_queue<std::pair<int, char>> pq;

        if (a > 0) pq.push({a, 'a'});
        if (b > 0) pq.push({b, 'b'});
        if (c > 0) pq.push({c, 'c'});

        std::string res = "";

        while (pq.size()) {
            auto[cnt1, ch1] = pq.top();
            pq.pop();

            if (res.size() >= 2 && res.back() == ch1 && res[res.size()-2] == ch1) {
                if (pq.empty()) break;

                auto[cnt2, ch2] = pq.top();
                pq.pop();

                res+=ch2;
                if(--cnt2 > 0) pq.push({cnt2, ch2});

                pq.push({cnt1, ch1});
            } else {
                res+=ch1;
                if (--cnt1 > 0) pq.push({cnt1, ch1});
            }
        }
        return res;
    }
};
