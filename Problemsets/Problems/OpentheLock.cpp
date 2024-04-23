#include <string>
#include <vector>
#include <queue>
#include <algorithm>
#include <unordered_set>

class Solution {
public:
    int openLock(std::vector<std::string>& deadends, std::string target) {
        std::unordered_set<std::string> deadendset(deadends.begin(), deadends.end());
        if (deadendset.count("0000")) return -1;

        std::queue<std::pair<std::string, int>> queue;
        queue.emplace("0000", 0);
        std::unordered_set<std::string> visited;
        visited.insert("0000");

        while (!queue.empty()) {
            auto [current, moves] = queue.front();
            queue.pop();
            if (current == target) return moves;

            for (int i = 0; i < 4; ++i) {
                for (int delta : {-1, 1}) {
                    int new_digit = (current[i] - '0' + delta + 10) % 10;
                    std::string new_comb = current;
                    new_comb[i] = new_digit + '0';

                    if (visited.find(new_comb) == visited.end() && deadendset.find(new_comb) == deadendset.end()) {
                        visited.insert(new_comb);
                        queue.push({new_comb, moves + 1});
                    }
                }
            }
        }
        return -1;
    }
};
