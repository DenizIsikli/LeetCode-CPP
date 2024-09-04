#include <vector>
#include <string>
#include <algorithm>
#include <unordered_map>

class Solution {
public:
    int robotSim(std::vector<int>& commands, std::vector<std::vector<int>>& obstacles) {
        std::unordered_map<std::string, int> mp;
        for (auto obst : obstacles) {
            std::string key = std::to_string(obst[0])+"+"+std::to_string(obst[1]);
            mp[key]++;
        }

        std::vector<std::vector<int>> direc = {{-1,0}, {0,1}, {1,0}, {0,-1}};

        int dir = 1;
        int x = 0, y = 0;
        int res = 0;

        for (int cmd : commands) {
            if (cmd == -2) {
                if (dir == 0) dir = 3;
                else dir--;
            } else if (cmd == -1) {
                dir = (dir+1)%4;
            } else {
                int k = cmd;
                for (int i = 0; i < k; i++) {
                    int newX = x+direc[dir][0];
                    int newY = y+direc[dir][1];

                    std::string key = std::to_string(newX)+"+"+std::to_string(newY);
                    if (mp.find(key) != mp.end()) {
                        break;
                    }
                    x = newX, y = newY;
                    res = std::max(res, (x*x)+(y*y));
                }
            }
        }
        return res;
    }
};
