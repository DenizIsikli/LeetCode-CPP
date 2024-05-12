#include <string>
#include <vector>
#include <unordered_set>
#include <map>

class Solution {
public:
    int maxPointsInsideSquare(std::vector<std::vector<int>>& points, std::string s) {
        std::map<int, std::vector<char>> mp;

        int i = 0, ans = 0;
        for (auto it : points) {
            mp[std::max(std::abs(it[0]), std::abs(it[1]))].push_back(s[i]);
            ++i;
        }

        std::unordered_set<char> st;
        for (auto[_, v] : mp) {
            for (auto c : v) {
                if (st.find(c) == st.end()) st.insert(c);
                 else return ans;
            }
            ans += v.size();
        }
        return ans;
    }
};
